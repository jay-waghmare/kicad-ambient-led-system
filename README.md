# Ambient LED System 💡 - Circular PCB with 3.3V Cell - KiCad Design

> Round Diya-style LED board with coin cell battery, auto-responsive - Designed in KiCad by Jay Waghmare - Based on your actual PCB image

[![KiCad](https://img.shields.io/badge/KiCad-7.0-314CB0?style=for-the-badge&logo=kicad&logoColor=white)](https://kicad.org)
[![Hardware](https://img.shields.io/badge/Type-Hardware%20Round%20PCB-orange?style=for-the-badge)](#)
[![Battery](https://img.shields.io/badge/Power-3.3V%20Coin%20Cell-green?style=for-the-badge)](#)
[![Author](https://img.shields.io/badge/Author-jay--waghmare-181717?style=for-the-badge&logo=github)](https://github.com/jay-waghmare)

<p align="center">
  <img src="https://raw.githubusercontent.com/jay-waghmare/kicad-ambient-led-system/main/hardware/pcb/pcb_preview.png" alt="PCB Preview" width="500" />
  <br><em>Your Actual PCB - Circular Board with BT1 3.3V Cell, R1/R3/R4, D1, MK1, U1, SW2, SW_SPDT - From your image</em>
</p>

---

## 🌟 What Is This?

This is my **Ambient Responsive LED / Digital Diya** board - **Circular PCB** designed in KiCad, powered by **3.3V coin cell (BT1)**.

**From your image I see:**

- **BT1 3.3V Cell** - Big circular holder on left - Coin cell battery (CR2032 3V/3.3V) - Main power
- **R1, R3, R4 (5.6k)** - 3 resistors top right - For LED current / sensor bias
- **R4 labeled 5.6k** - Visible in your image
- **D1** - Middle near BT1 - LED or photodiode (circular with + and -)
- **P2 / MK1** - Near D1 - **MK1** maybe Microphone or LDR sensor (labeled MK1), **P2** maybe LDR or buzzer?
- **U1** - 8-pin IC bottom right - Brain of board (maybe ATtiny85 / NE555 Timer / LM358 Op-amp - Check your schematic what U1 is)
- **SW2** - Push button bottom middle (4 pins + center) - For on/off or mode
- **SW_SPDT** - Slide switch bottom - SPDT switch for power/mode selection - Labeled SW_SPDT
- **Purple circle** - Edge.Cuts - Circular board outline
- **Red traces** - Top copper layer

**This looks like:** Battery-powered Diya that turns on/off automatically via sensor (MK1 maybe sound sensor for clap, or LDR for ambient light) - **Ambient Responsive!**

## ✨ Board Features 

- ✅ **Circular PCB** - Diya shape, purple Edge.Cuts
- ✅ **BT1 3.3V Cell** - Coin cell holder - No USB needed, portable
- ✅ **R1, R3, R4** - Resistors (R4 5.6k visible)
- ✅ **D1** - LED / Sensor
- ✅ **MK1** - Microphone / LDR sensor (labeled MK1)
- ✅ **U1** - 8-pin IC (ATtiny / 555 / op-amp) - Controls LED logic
- ✅ **SW2** - Push button - Mode / Test
- ✅ **SW_SPDT** - Slide switch - Power on/off or mode select
- ✅ **Red traces** - Top layer routing
- ✅ **Low power** - Runs on coin cell

## 🛠️ Built With (From Your Image)

- **Tool:** KiCad (your image shows KiCad PCB editor dark theme with grid)
- **Battery:** 3.3V Coin Cell BT1 (CR2032)
- **PCB:** Circular, single/double layer, purple outline
- **Components:** R1, R3, R4, D1, MK1, U1 (8-pin), SW2, SW_SPDT
- **Power:** 3.3V Cell only - No regulator needed (coin cell is 3V)

## 📁 Files

```
kicad-ambient-led-system/
├── README.md (this file - based on your PCB image)
├── ambient-led.kicad_pro (KiCad project - add yours)
├── ambient-led.kicad_sch (Schematic - add yours)
├── ambient-led.kicad_pcb (PCB - This is your circular board from image)
├── hardware/
│   ├── pcb/
│   │   ├── pcb_preview.png (Your image - Circular PCB with BT1, R1/R3/R4, U1, SW2)
│   │   ├── 3d-render.png (Export 3D view from KiCad)
│   │   └── gerbers.zip (For JLCPCB fabrication)
│   ├── schematics/
│   │   ├── schematic.pdf (Export schematic)
│   │   └── schematic.png (Screenshot)
│   └── photos/
│       ├── board_top.jpg (Real PCB photo after fabrication)
│       └── demo_video.mp4 (LED working video)
├── LICENSE (MIT)
└── .gitignore
```

## 🔧 How It Works (Guessing From Your PCB - Update With Your Actual Working)

**Based on components BT1, R1/R3/R4, D1, MK1, U1, SW2, SW_SPDT:**

**Option 1 - If MK1 is LDR (Light sensor) - Ambient Light Responsive:**
```
Room Light → LDR (MK1?) → Resistance changes → U1 (maybe transistor/op-amp) reads
→ Dark = High resistance → LED D1 bright (Diya on)
→ Bright = Low resistance → LED dim/off (saves battery)
→ SW_SPDT = Power on/off, SW2 = Test
```

**Option 2 - If MK1 is Microphone - Sound/Clap Responsive:**
```
Clap Sound → MK1 Microphone picks → U1 (maybe 555 or ATtiny) detects
→ Toggles LED D1 on/off
→ SW2 = Manual on/off, SW_SPDT = Auto/Manual mode
```

**Option 3 - Simple Diya with battery:**
```
BT1 3.3V Cell → SW_SPDT slide switch → Powers U1 and LED D1
→ R1/R3/R4 set LED current (5.6k for low current to save battery)
→ SW2 push button for momentary on
→ U1 maybe blinks LED or controls brightness
```


## 📦 How to View My Design

1. Install KiCad 7.0: https://kicad.org/download/
2. Clone:
```
git clone https://github.com/jay-waghmare/kicad-ambient-led-system.git
cd kicad-ambient-led-system
```
3. Open `ambient-led.kicad_pro` in KiCad → Open PCB Editor → You see circular board like in image
4. Open Schematic Editor → See how BT1, R1, R3, R4, D1, MK1, U1, SW2 connect

## 📸 Your Actual PCB 

<p align="center">
  <img src="hardware/pcb/pcb_preview.png" alt="Your PCB" width="500" />
</p>

**Components visible in your image:**
- **BT1 3.3V Cell** - Left side circular holder with 2 pads (one square, one round)
- **R1 (top), R3 (middle), R4 5.6k (bottom)** - Top right vertical
- **D1** - Middle (circular with 2 pads)
- **B2 / P2 / MK1** - Middle right (MK1 labeled, maybe mic)
- **U1** - 8-pin IC bottom right (8 pads around rectangle)
- **SW2** - Bottom middle (4 corner pads + center)
- **SW_SPDT** - Bottom with rectangle and white notch

**Red lines = Copper traces on Top layer**

## 🗺️ Roadmap (For This Circular Board)

- [x] KiCad PCB design - Circular board with BT1, R1/R3/R4, D1, MK1, U1, SW2 (your image)
- [ ] Export schematic PDF + Add to hardware/schematics/schematic.pdf
- [ ] Export 3D render: KiCad PCB Editor → View → 3D View → Export PNG → hardware/pcb/3d-render.png
- [ ] Add BOM: List exact values - What is U1? What is MK1? What is D1? R1? R3?
- [ ] Fabricate at JLCPCB: File → Fabrication Outputs → Gerbers → gerbers.zip → Upload to JLCPCB (5 pcs ~$5, circular board may cost more)
- [ ] Solder: Coin cell holder, resistors, LED, IC, switches
- [ ] Test: Insert CR2032 cell, slide SW_SPDT, press SW2, see LED D1 glow
- [ ] Take real photo: hardware/photos/board.jpg + video demo

## 📝 What I Learned (From This Round Board)

- Circular Edge.Cuts in KiCad - How to make round PCB (Diya shape)
- Coin cell holder footprint BT1 3.3V Cell
- Low power design - 5.6k resistor for LED to save battery
- SPDT slide switch SW_SPDT for power/mode
- Push button SW2

## 👨‍💻 Author

**Jay Waghmare** 
- GitHub: [@jay-waghmare](https://github.com/jay-waghmare) - Professional (2 repos: MachXO2-KiCad-Board + this one)


If you like round PCB Diya designs, please ⭐ star this repo!

## 📄 License

MIT License

> Circular Diya PCB with 3.3V coin cell - Designed from scratch in KiCad - Based on your actual PCB image - Jay - Pune 2026
