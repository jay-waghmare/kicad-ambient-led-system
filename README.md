# My Ambient LED System - ATtiny85 + LDR + Mic - Circular PCB

> I designed this round Diya board with 3.3V coin cell, ATtiny85, light and sound sensors in KiCad 

[![KiCad](https://img.shields.io/badge/Made%20with-KiCad-314CB0?style=for-the-badge&logo=kicad)](https://kicad.org)
[![My Board](https://img.shields.io/badge/My%20Board-Circular%20Diya%20PCB-orange?style=for-the-badge)](#)
[![My Power](https://img.shields.io/badge/My%20Power-BT1%203.3V%20Cell-green?style=for-the-badge)](#)

<p align="center">
  <img src="https://raw.githubusercontent.com/jay-waghmare/kicad-ambient-led-system/main/hardware/Schmeatic-.png" alt="My Schematic - 5 Units" width="800" />
  <br><em>My schematic - I divided into 5 units: Battery, ATtiny85 MCU, Light sensing, Light, Sound sensing</em>
</p>

<p align="center">
  <img src="https://raw.githubusercontent.com/jay-waghmare/kicad-ambient-led-system/main/hardware/LayoutPcb.png" alt="My PCB" width="450" />
  <br><em>My PCB layout - Circular with BT1 3.3V Cell, R1/R3/R4 5.6k, D1, MK1, U1, SW2 - My actual design</em>
</p>

---

## What I Made

I made a **circular Diya LED board** that runs on a **3.3V coin cell (BT1)**. It has both **light sensing (LDR)** and **sound sensing (microphone)** and a **yellow LED**, all controlled by my **ATtiny85V**.

I wanted to make a Diya that:
- Turns on automatically when dark (like real Diya at night)
- Saves battery when bright
- Maybe responds to clap sound too

So I added both LDR and mic!

## My Schematic - 5 Units (What I Designed)

I divided my schematic into 5 units in KiCad (you can see in my Schmeatic-.png):

### 1. My Battery Unit
- **BT1 3.3V Cell** - I used a coin cell holder for CR2032 battery - Main power, portable, no USB needed
- **SW2 SW_SPDT** - I added a SPDT slide switch for power on/off

### 2. My Microcontroller Unit - ATtiny85
- **U1 ATtiny85V-10P** - I chose ATtiny85V low voltage version because it works on 1.8V-5.5V, perfect for my 3.3V coin cell
  - Pin 8 VCC → I connected to +3.3V
  - Pin 4 GND → GND
  - Pin 6 PB1 → I connected to my LED (D1)
  - Pin 7 PB2 → I connected to my LDR sensor (LDR node)
  - Pin 2 PB3 → I connected to my Mic sensor (MIC node)

### 3. My Light Sensing Unit
- **R1 R** - Fixed resistor to +3.3V
- **R2 LDR07** - LDR to GND - Changes resistance based on light
- **LDR node** - Between R1 and R2 → To ATtiny85 PB2
- **How I made it:** +3.3V → R1 → LDR node → R2 LDR → GND - Voltage divider. Dark = High resistance → HIGH voltage, Bright = Low → LOW

### 4. My Light Unit
- **D1 5mm Yellow LED** - I chose yellow for warm Diya glow
- **R3 R** - Resistor to GND - Limits current
- **LED node** → ATtiny85 PB1 - My code controls LED on/off

### 5. My Sound Sensing Unit
- **R4 5.6k** - Pull-up resistor from +3.3V to MIC node - Value 5.6k visible in my PCB!
- **MK1 Microphone_Condenser** - Electret mic to GND - Picks up clap/sound
- **MIC node** - Between R4 and MK1 → To ATtiny85 PB3

## My Board Features (From My Image)

- **Circular PCB** - Diya shape
- **BT1 3.3V Cell** - Coin cell holder
- **R1, R3, R4 5.6k** - Resistors
- **D1** - LED
- **MK1** - Microphone / LDR sensor
- **U1** - 8-pin IC (ATtiny85)
- **SW2** - Push button
- **SW_SPDT** - Slide switch
- **Low power** - Runs on coin cell

## 📁 My Files

```
kicad-ambient-led-system/
├── README.md (this file)
├── hardware/
│   ├── LayoutPcb.png (My circular PCB image)
│   └── Schmeatic-.png (My schematic - 5 units)
└── LICENSE
```

I already uploaded LayoutPcb.png and Schmeatic-.png

## How My Board Works

```
Power: BT1 3.3V Cell → SW2 switch → Powers ATtiny85, sensors, LED

Light Sensing: +3.3V → R1 → LDR node → R2 LDR07 → GND → LDR node → ATtiny85 PB2

Sound Sensing: +3.3V → R4 5.6k → MIC node → MK1 Mic → GND → MIC node → ATtiny85 PB3

LED: +3.3V → D1 Yellow LED → R3 → GND, controlled by ATtiny85 PB1

My Code Plan:
- Read PB2 LDR: Dark → LED on, Bright → LED off (save battery)
- Read PB3 Mic: Clap → Toggle LED
```

**My example code for ATtiny85:**

```cpp
const int ledPin = 1; // PB1 - My D1 LED
const int ldrPin = A1; // PB2 - My LDR
const int micPin = A3; // PB3 - My Mic

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  int micValue = analogRead(micPin);

  if (ldrValue > 500) {
    digitalWrite(ledPin, HIGH); // Dark → LED on
  } else {
    digitalWrite(ledPin, LOW); // Bright → LED off
  }

  if (micValue > 700) {
    digitalWrite(ledPin, !digitalRead(ledPin)); // Clap → Toggle
    delay(500);
  }
  delay(100);
}
```

## My Photos

<p align="center">
  <img src="https://raw.githubusercontent.com/jay-waghmare/kicad-ambient-led-system/main/hardware/Schmeatic-.png" alt="My Schematic" width="800" />
</p>

<p align="center">
  <img src="https://raw.githubusercontent.com/jay-waghmare/kicad-ambient-led-system/main/hardware/LayoutPcb.png" alt="My PCB" width="500" />
</p>

## How to View My Design

1. Install KiCad 7.0: https://kicad.org/download/
2. Clone:
```
git clone https://github.com/jay-waghmare/kicad-ambient-led-system.git
```
3. Open in KiCad

## My Roadmap

- [x] I designed KiCad schematic - 5 units - Done!
- [x] I designed PCB - Circular - Done!
- [x] I uploaded schematic and PCB images - Done!
- [ ] I will add KiCad project files
- [ ] I will write ATtiny85 code
- [ ] I will fabricate PCB and test

## What I Learned

- Circular Edge.Cuts for Diya shape
- BT1 coin cell holder
- Low power with 5.6k resistor
- ATtiny85V for coin cell
- Voltage divider with LDR
- Pull-up with mic

## About Me

I am **Jay Waghmare** - I design round PCB Diya with ATtiny85 + LDR + Mic

- My GitHub: [@jay-waghmare](https://github.com/jay-waghmare)

If you like my round Diya PCB, please ⭐ star!

## License

MIT License

> My circular Diya PCB with BT1 3.3V Cell + U1 ATtiny85V + R2 LDR07 + D1 Yellow LED + R4 5.6k + MK1 mic - I designed from scratch in KiCad - Based on my actual schematic Schmeatic-.png and PCB LayoutPcb.png
