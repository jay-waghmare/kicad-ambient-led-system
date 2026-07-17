/*
 * My Ambient LED System - ATtiny85V Firmware
 * Board: Circular PCB with BT1 3.3V Cell, R1+R2 LDR07, D1 Yellow LED, R4 5.6k + MK1 Mic
 * Author: Jay Waghmare - jay-waghmare - Based on my schematic Schmeatic-.png
 * 
 * Connections from my schematic:
 * - BT1 3.3V Cell -> SW2 SPDT -> Powers everything
 * - U1 ATtiny85V-10P: VCC 8 -> +3.3V, GND 4 -> GND
 * - PB1 (Pin 6) -> LED - Controls D1 5mm Yellow LED + R3
 * - PB2 (Pin 7) -> LDR - Reads light sensing R1 + R2 LDR07 voltage divider
 * - PB3 (Pin 2) -> MIC - Reads sound sensing R4 5.6k + MK1 Microphone
 * - PB5 RESET, AREF, XTAL not used for now
 * 
 * Logic I designed:
 * - Dark room (LDR high) -> LED bright (Diya on)
 * - Bright room (LDR low) -> LED off (save battery)
 * - Clap sound (Mic spike) -> Toggle LED on/off
 */

const int ledPin = 1;   // PB1 - My D1 Yellow LED (Pin 6 of ATtiny85)
const int ldrPin = A1;  // PB2 - My LDR sensor R2 LDR07 (Pin 7) - ADC1
const int micPin = A3;  // PB3 - My Mic MK1 sensor (Pin 2) - ADC3

// My thresholds - Adjust based on my R1, R2 LDR07, R4 5.6k values
int darkThreshold = 500;  // LDR value for dark detection - I will tune
int clapThreshold = 700;  // Mic value for clap detection - I will tune

bool ledState = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  // LDR and MIC are analog inputs, no need pinMode for ADC
  // Optional: Start with LED off to save my BT1 battery
  digitalWrite(ledPin, LOW);
}

void loop() {
  // My light sensing - Read LDR07 R2
  int ldrValue = analogRead(ldrPin); // 0-1023 - Dark = high? Check my divider R1+R2
  
  // My ambient logic: Dark -> LED on (Diya glows at night)
  if (ldrValue > darkThreshold) {
    // Dark room - Turn on my D1 Yellow LED
    ledState = true;
    digitalWrite(ledPin, HIGH);
  } else {
    // Bright room - Turn off to save my BT1 3.3V Cell battery
    ledState = false;
    digitalWrite(ledPin, LOW);
  }

  // My sound sensing - Read MK1 Microphone
  int micValue = analogRead(micPin); // 0-1023 - Quiet = high, Sound = spike low/high

  // My clap toggle logic
  if (micValue > clapThreshold) {
    // Clap detected on my MK1 mic!
    ledState = !ledState; // Toggle my LED
    digitalWrite(ledPin, ledState ? HIGH : LOW);
    delay(500); // Debounce - Avoid multiple toggles from one clap
  }

  delay(100); // Small delay to save my coin cell battery
}

// My future improvements:
// - Use PWM on PB1 for brightness control: analogWrite(ledPin, brightness) 
// - Map LDR value to PWM: Dark = PWM 255 bright, Bright = PWM 20 dim
// - Add sleep mode for ATtiny85V to save BT1 battery: LowPower library
// - Add SW2 button read to change modes
