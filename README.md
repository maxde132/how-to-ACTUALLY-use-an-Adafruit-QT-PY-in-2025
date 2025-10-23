**Getting Started with Adafruit QT Py CH32V203G6 (as of 10/23/2025)**
---
Overview:
The Adafruit QT Py CH32V203G6 is a compact RISC-V microcontroller board with built-in NeoPixel, USB programming, and QT I2C connector. It supports Arduino development via the CH32 core and WCH tools.

**Requirements:**
- Arduino IDE (v2.x or later)
- CH32 Board Support Package
- WCHISP Tool (for USB flashing)
- WinUSB Driver (installed via Zadig)
- Adafruit NeoPixel Library (optional)

**Setup Instructions:**

1. **Install CH32 Board Support:**
   - Arduino IDE > File > Preferences
   - Add this URL to “Additional Board URLs”:
     https://github.com/openwch/arduino_core_ch32/raw/main/package_ch32_index.json
   - Tools > Board > Boards Manager
   - Search: “CH32 MCU EVT Boards” → Install

2. **Install Libraries:**
   - Tools > Manage Libraries
   - Install: “Adafruit NeoPixel”

3. **Install WinUSB Driver:**
   - Download Zadig: https://zadig.akeo.ie
   - Plug in QT Py CH32V203G6
   - Zadig > Options > List All Devices
   - Select device with ID 4348:55e0
   - Choose “WinUSB” → Install Driver

4. **Verify Upload Tool:**
   - Ensure wchisp.exe exists at:
     C:\Users\<yourname>\AppData\Local\Arduino15\packages\WCH\tools\wchisp\1.0.0\

Uploading Your First Sketch:

Arduino IDE Settings:
  - Board: “Adafruit QT Py CH32V203G”
  - Upload Method: “WCH-ISP”
  - Programmer: “WCH-LinkE”
  - USB Support: “None”

**Final setup:**
Now you can plug in any script you like, I recommend the blink.ino in this reporitory 
