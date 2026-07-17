# Ambient LED System 💡 - Circular PCB with 3.3V Coin Cell - KiCad Design

> Round Diya-style LED board with coin cell battery, responsive design - Designed in KiCad by Jay Waghmare - Pune, India

[![KiCad](https://img.shields.io/badge/KiCad-7.0-314CB0?style=for-the-badge&logo=kicad&logoColor=white)](https://kicad.org)
[![Hardware](https://img.shields.io/badge/Type-Hardware%20Round%20PCB-orange?style=for-the-badge)](#)
[![Battery](https://img.shields.io/badge/Power-3.3V%20Coin%20Cell%20BT1-green?style=for-the-badge)](#)
[![PCB](https://img.shields.io/badge/PCB-Circular%20Diya%20Shape-purple?style=for-the-badge)](#)
[![Author](https://img.shields.io/badge/Author-jay--waghmare-181717?style=for-the-badge&logo=github)](https://github.com/jay-waghmare)

<p align="center">
  <img src="https://raw.githubusercontent.com/jay-waghmare/kicad-ambient-led-system/main/hardware/LayoutPcb.png" alt="Circular PCB - BT1 3.3V Cell" width="500" />
  <br><em>Your Actual PCB - Circular Board with BT1 3.3V Cell, R1/R3/R4 5.6k, D1, MK1, U1, SW2, SW_SPDT - From your uploaded LayoutPcb.png</em>
</p>

---

## 🌟 What Is This? (Based on Your Actual PCB Image You Uploaded)

This is my **Ambient Responsive LED / Digital Diya** board - **Circular PCB** (Diya shape, purple Edge.Cuts) designed in KiCad, powered by **3.3V coin cell BT1 (CR2032)**.

**From your uploaded image `LayoutPcb.png` I see:**

- **BT1 3.3V Cell** - Big circular holder on left side, labeled BT1, with text "3.3V Cell" in center - Coin cell battery holder (CR2032) - Main power, no USB needed, portable Diya
- **R1 (top), R3 (middle), R4 5.6k (bottom)** - 3 resistors top right vertical, R1 labeled top, R3 middle, R4 bottom with "5.6k" text visible in your image - For LED current limiting / sensor bias - 5.6k for low power to save battery
- **D1** - Middle near BT1 - Circular with + and - pads - LED or photodiode (D1 labeled)
- **MK1** - Right of D1, small rectangular with 2 pads, labeled MK1 - **Microphone or LDR sensor** (MK usually = Microphone in KiCad)
- **P2 / B2** - Near MK1, maybe LDR or sensor connector
- **U1** - 8-pin IC bottom right, labeled U1, with 8 pads around rectangle (4 left, 4 right) - Brain of board - Could be ATtiny85 / NE555 Timer / LM358 Op-amp / MCP602 - Check your schematic what U1 is
- **SW2** - Push button bottom middle, labeled SW2, with 4 corner pads + center pad, white outline - For on/off or mode selection
- **SW_SPDT** - Slide switch bottom, labeled SW_SPDT, white rectangle with notch - SPDT switch for Power ON/OFF or Auto/Manual mode
- **Purple circle** - Edge.Cuts - Circular board outline - Diya shape
- **Red traces** - Top copper layer (F.Cu) connecting all components

**This is:** Battery-powered Diya that is **Ambient Responsive** - Could be light-responsive (LDR) or sound-responsive (Mic MK1) or simple manual with switches - **Perfect for Digital Diya project!**

## ✨ Board Features (From Your Image)

- ✅ **Circular PCB** - Diya shape, purple Edge.Cuts, round outline
- ✅ **BT1 3.3V Cell** - Coin cell holder - Portable, no USB, runs on CR2032
- ✅ **R1, R3, R4 (R4 5.6k)** - Resistors top right - 5.6k visible for low power
- ✅ **D1** - LED / Sensor middle
- ✅ **MK1** - Microphone / LDR sensor - Makes it ambient responsive
- ✅ **U1** - 8-pin IC - Controls LED logic (ATtiny / 555 / op-amp)
- ✅ **SW2** - Push button - Mode / Test button
- ✅ **SW_SPDT** - Slide switch - Power on/off or mode select
- ✅ **Red traces** - Top layer routing
- ✅ **Low power** - Runs on 3.3V coin cell, 5.6k resistor saves battery
- ✅ **Compact** - All components on single circular board

## 🛠️ Built With (From Your Image)

- **Tool:** KiCad (your image shows KiCad PCB editor dark theme with grid dots, purple Edge.Cuts, red F.Cu traces, yellow F.Silk labels)
- **Battery:** BT1 3.3V Cell - CR2032 coin cell holder (3V, labeled 3.3V Cell in your image)
- **PCB:** Circular, likely single layer or double layer, purple circular outline, ~50-60mm diameter (Diya size)
- **Components Visible:** BT1 (coin cell), R1, R3, R4 (5.6k), D1, MK1, U1 (8-pin DIP/SOIC), SW2 (push button), SW_SPDT (slide switch SPDT)
- **Power:** 3.3V Cell only - No regulator needed - Direct battery to circuit - Ultra low power

## 📁 Files (Your Current Repo - Live with 6 Commits)

```
kicad-ambient-led-system/
├── README.md (this file - FINAL professional version based on your circular PCB image)
├── LICENSE (MIT)
├── hardware/
│   ├── LayoutPcb.png (YOUR circular PCB image - BT1, R1/R3/R4, D1, MK1, U1, SW2 - You uploaded 2 mins ago!)
│   └── Schmeatic-.png (Your schematic screenshot - You uploaded 2 mins ago!)
├── (Add your KiCad files next - see below)
└── (Add more files after)
```

**You already uploaded:**
- `hardware/LayoutPcb.png` - Circular PCB with BT1 3.3V Cell, R1/R3/R4 5.6k, D1, MK1, U1, SW2, SW_SPDT - From your image shared
- `hardware/Schmeatic-.png` - Schematic screenshot (spelled Schmeatic-)

**Still need to upload (if you have):**
- Your KiCad project files: `ambient-led.kicad_pro`, `ambient-led.kicad_sch`, `ambient-led.kicad_pcb` (your actual KiCad files for this round board)
- 3D render: KiCad PCB Editor → View → 3D View → Export PNG → `hardware/pcb/3d-render.png`
- Gerbers: File → Fabrication Outputs → Gerbers → ZIP → `hardware/pcb/gerbers.zip`
- Real board photo after fabrication: `hardware/photos/board.jpg`

## 🔧 How It Works (Update With Your Actual Circuit - Guessing From Image)

**Based on BT1, R1/R3/R4 5.6k, D1, MK1, U1, SW2, SW_SPDT:**

**Most Likely - Simple Diya with Battery + Switches:**
```
BT1 3.3V Cell (CR2032) → SW_SPDT slide switch (power on/off)
→ SW2 push button (momentary) → R1/R3/R4 resistors (5.6k limits current to save battery)
→ D1 LED glows → U1 maybe blinks or controls brightness
→ MK1 maybe LDR that auto-adjusts brightness based on room light (ambient responsive)
```

**If MK1 is LDR (Light Sensor) - Ambient Light Responsive:**
```
Room Dark → LDR MK1 high resistance → U1 turns LED D1 bright (Diya on)
Room Bright → LDR low resistance → U1 turns LED dim/off (saves battery)
SW_SPDT = Auto/Manual mode, SW2 = Test button
R4 5.6k sets sensitivity
```

**If MK1 is Microphone - Sound/Clap Responsive:**
```
Clap sound → MK1 mic picks → U1 (maybe LM358 op-amp or ATtiny) detects → Toggles D1 LED on/off
SW2 = Manual on/off, SW_SPDT = Sound mode / Always on mode
```

**If U1 is ATtiny85:**
```
ATtiny85 reads MK1 sensor (LDR/mic), controls D1 LED via PWM for brightness
SW2 changes mode, SW_SPDT powers on/off
Code in ATtiny for ambient responsive logic
```

**What is U1 actually? What is MK1? What is D1?** Check your schematic `Schmeatic-.png` you uploaded - Open it and see what U1, MK1, D1 are labeled as in schematic - Update this section!

## 📸 Your Actual Hardware (From Your Uploads)

<p align="center">
  <img src="https://raw.githubusercontent.com/jay-waghmare/kicad-ambient-led-system/main/hardware/LayoutPcb.png" alt="PCB Layout" width="500" />
  <br><em>PCB Layout - Circular with BT1 3.3V Cell, R1/R3/R4, D1, MK1, U1, SW2</em>
</p>

<p align="center">
  <img src="https://raw.githubusercontent.com/jay-waghmare/kicad-ambient-led-system/main/hardware/Schmeatic-.png" alt="Schematic" width="600" />
  <br><em>Schematic - Schmeatic-.png - Your schematic screenshot</em>
</p>

**Components visible in LayoutPcb.png:**
- Left: **BT1 3.3V Cell** holder with 2 pads - Big circular
- Top Right: **R1 (top), R3 (middle), R4 5.6k (bottom)** - Vertical resistors
- Middle: **D1** circular + **MK1** rectangular + **B2/P2** 
- Bottom Right: **U1** 8-pin IC
- Bottom Middle: **SW2** push button (4 pads + center)
- Bottom: **SW_SPDT** slide switch

**Red lines = Copper traces**

## 📦 How to View My Design

1. Install KiCad 7.0: https://kicad.org/download/
2. Clone:
```
git clone https://github.com/jay-waghmare/kicad-ambient-led-system.git
cd kicad-ambient-led-system
```
3. Open `ambient-led.kicad_pro` in KiCad (if you upload your KiCad project files)
4. See PCB - Circular like in your image - With BT1, R1/R3/R4, D1, MK1, U1, SW2

## 🗺️ Roadmap (For This Round Board)

- [x] KiCad PCB design - Circular board with BT1, R1/R3/R4 5.6k, D1, MK1, U1, SW2, SW_SPDT - Your image - Done!
- [x] Upload PCB layout image LayoutPcb.png - Done 2 mins ago!
- [x] Upload schematic screenshot Schmeatic-.png - Done 2 mins ago!
- [ ] Add KiCad project files: .kicad_pro, .kicad_sch, .kicad_pcb (upload via Add file → Upload files)
- [ ] Export 3D render: KiCad → View → 3D View → Export PNG → hardware/pcb/3d-render.png
- [ ] Add BOM with exact values: What is U1? (ATtiny? NE555? LM358?) What is MK1? (Mic? LDR? Buzzer?) What is D1? (LED type?) What are R1,R3 values? R4 is 5.6k visible!
- [ ] Write working doc: How does BT1 + SW_SPDT + SW2 + U1 + MK1 + D1 work together? Is it auto on/off via light or sound?
- [ ] Fabricate at JLCPCB: File → Fabrication Outputs → Gerbers → gerbers.zip → Upload to JLCPCB (circular board - select Edge.Cuts)
- [ ] Solder: BT1 holder, resistors R1/R3/R4, D1 LED, MK1 sensor, U1 IC, SW2 button, SW_SPDT switch
- [ ] Test: Insert CR2032 3V cell into BT1, slide SW_SPDT on, press SW2, see D1 LED glow! Test ambient response if MK1 is sensor
- [ ] Take real photo: hardware/photos/board.jpg + video demo of LED glowing as Diya

## 📝 What I Learned (From This Round Board)

- Circular Edge.Cuts in KiCad - How to make round PCB for Diya shape (not rectangular)
- BT1 3.3V Cell footprint - Coin cell holder
- Low power design - Using 5.6k resistor for LED to make coin cell last long
- SPDT slide switch SW_SPDT for power/mode selection
- Push button SW2 for manual control
- Compact placement on circular board - All components in small round area

## 👨‍💻 Author

**Jay Waghmare** - Hardware Designer, Round PCB Diya Designer, Pune
- GitHub: [@jay-waghmare](https://github.com/jay-waghmare) - Professional (2 repos: MachXO2-KiCad-Board with 14 commits + kicad-ambient-led-system with 6 commits = 20 commits today!)
- Location: Pune, India
- Old: [@jaywaghmare26](https://github.com/jaywaghmare26) (archive)

If you like round PCB Diya designs with coin cell, please ⭐ star this repo!

## 📄 License

MIT License

> Circular Diya PCB with BT1 3.3V coin cell - R1/R3/R4 5.6k - MK1 sensor - U1 IC - SW2 + SW_SPDT - Designed from scratch in KiCad - Based on your actual PCB image LayoutPcb.png - Jay - Pune 2026 - 6 commits today!
