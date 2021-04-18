#include <avr/io.h>

/*
 * ATtiny10 TPI Generated Programmer for ATTiny10IDE.  Supports both 5V and 12V Programmers
 * IMPORTANT: Original, Relay-based Emulator/Programmer board needs mod (A0 tied to ground)
 */
 
//                 +-\/-+
//  TPIDAT / PB0 1 |    | 6 PB3 / RESET
//           Gnd 2 |    | 5 Vcc
//  TPICLK / PB1 3 |    | 4 PB2
//                 +----+

const unsigned char program[] PROGMEM  = { 
  0x14, 0xC0, 0x23, 0xC0, 0x22, 0xC0, 0x21, 0xC0, 0x20, 0xC0, 0x1F, 0xC0, 0x1E, 0xC0, 0x1D, 0xC0,
  0x1C, 0xC0, 0x1B, 0xC0, 0x1A, 0xC0, 0xA4, 0xC0, 0x9D, 0xC0, 0x9C, 0xC0, 0x9D, 0xC0, 0x9E, 0xC0,
  0x9D, 0xC0, 0x9E, 0xC0, 0x97, 0xC0, 0x96, 0xC0, 0x97, 0xC0, 0x11, 0x27, 0x1F, 0xBF, 0xCF, 0xE5,
  0xD0, 0xE0, 0xDE, 0xBF, 0xCD, 0xBF, 0x20, 0xE0, 0xA0, 0xE4, 0xB0, 0xE0, 0x01, 0xC0, 0x1D, 0x93,
  0xA6, 0x34, 0xB2, 0x07, 0xE1, 0xF7, 0x02, 0xD0, 0xBC, 0xC0, 0xDA, 0xCF, 0x48, 0xED, 0x4C, 0xBF,
  0x16, 0xBF, 0x08, 0x9A, 0x09, 0x98, 0x42, 0xE0, 0x43, 0xB9, 0x41, 0xE0, 0x41, 0xA9, 0x15, 0xA9,
  0x20, 0xE8, 0x30, 0xE0, 0x01, 0x99, 0x0A, 0xC0, 0x45, 0xA1, 0x41, 0x13, 0x08, 0xC0, 0x12, 0xA9,
  0x41, 0xA1, 0x4F, 0x5F, 0x41, 0xA9, 0x41, 0xE0, 0x45, 0xA9, 0x01, 0xC0, 0x15, 0xA9, 0x41, 0xA1,
  0x41, 0x13, 0x0C, 0xC0, 0x48, 0xE4, 0x10, 0x9A, 0x00, 0x00, 0x10, 0x98, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x50, 0xB1, 0xF7, 0x2E, 0xC0, 0x41, 0x30, 0x51, 0xF4,
  0x42, 0xA1, 0x51, 0xE0, 0x54, 0x0F, 0x52, 0xA9, 0x5B, 0xE0, 0x54, 0x0F, 0x53, 0xA9, 0x4B, 0x5E,
  0x44, 0xA9, 0x22, 0xC0, 0x4E, 0x30, 0xF8, 0xF4, 0x42, 0x50, 0x42, 0x95, 0x40, 0x7F, 0x50, 0xA1,
  0x65, 0x2F, 0x70, 0xE0, 0x57, 0xFF, 0x06, 0xC0, 0x80, 0xE0, 0x91, 0xE0, 0x86, 0x1B, 0x97, 0x0B,
  0x68, 0x2F, 0x79, 0x2F, 0x83, 0xE0, 0x75, 0x95, 0x67, 0x95, 0x8A, 0x95, 0xE1, 0xF7, 0x74, 0x2F,
  0x76, 0x0F, 0x72, 0xA9, 0x78, 0xE0, 0x74, 0x0F, 0x73, 0xA9, 0x40, 0x5F, 0x46, 0x1B, 0x44, 0xA9,
  0x5E, 0x5F, 0x50, 0xA9, 0x01, 0xC0, 0x11, 0xA9, 0x41, 0xA1, 0x41, 0x13, 0x0A, 0xC0, 0x9F, 0xEB,
  0x44, 0xED, 0x51, 0xE0, 0x91, 0x50, 0x40, 0x40, 0x50, 0x40, 0xE1, 0xF7, 0x00, 0xC0, 0x00, 0x00,
  0xA9, 0xCF, 0xE2, 0xE4, 0xF0, 0xE0, 0xAE, 0x2F, 0xBF, 0x2F, 0x40, 0x81, 0x40, 0x3C, 0x10, 0xF0,
  0x40, 0x5C, 0x40, 0x83, 0xEF, 0x5F, 0xFF, 0x4F, 0x8C, 0x91, 0xB8, 0x2F, 0xB2, 0x95, 0xB6, 0x95,
  0xB7, 0x70, 0x88, 0x0F, 0x88, 0x0F, 0x88, 0x0F, 0x90, 0xE0, 0xA8, 0x2F, 0xA0, 0x95, 0x4B, 0x2F,
  0x49, 0x0F, 0x50, 0xE0, 0x4A, 0x30, 0x51, 0x07, 0x48, 0xF4, 0x45, 0x5F, 0x5F, 0x4F, 0x4F, 0x93,
  0x5F, 0x93, 0x08, 0x95, 0xCF, 0xEF, 0x05, 0xC0, 0xCA, 0x2F, 0x03, 0xC0, 0xC0, 0xE0, 0x01, 0xC0,
  0xC8, 0x2F, 0x40, 0xE0, 0x50, 0xE0, 0xD0, 0xE0, 0x62, 0x2F, 0x73, 0x2F, 0x04, 0x2F, 0x02, 0xC0,
  0x75, 0x95, 0x67, 0x95, 0x0A, 0x95, 0xE2, 0xF7, 0x6C, 0x23, 0x7D, 0x23, 0x67, 0x2B, 0x49, 0xF0,
  0x10, 0x9A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x98, 0x00, 0x00,
  0x08, 0xC0, 0x10, 0x9A, 0x00, 0x00, 0x10, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x4F, 0x5F, 0x5F, 0x4F, 0x48, 0x30, 0x51, 0x07, 0xF1, 0xF6, 0x9E, 0x5F, 0x96, 0x30,
  0x09, 0xF0, 0xC5, 0xCF, 0x85, 0xE4, 0x90, 0xE0, 0x8E, 0x17, 0x9F, 0x07, 0x09, 0xF0, 0xAB, 0xCF,
  0x9E, 0xCF, 0xF8, 0x94, 0xFF, 0xCF };
const unsigned char clockCal[] PROGMEM = {
 0x0A, 0xC0, 0x18, 0x95, 0x18, 0x95, 0x18, 0x95, 0x18, 0x95, 0x18, 0x95, 0x18, 0x95, 0x18, 0x95,
 0x18, 0x95, 0x18, 0x95, 0x18, 0x95, 0x00, 0xE0, 0x0E, 0xBF, 0x0F, 0xE5, 0x0D, 0xBF, 0x08, 0xED,
 0x0C, 0xBF, 0x00, 0xE0, 0x06, 0xBF, 0x05, 0xE9, 0x09, 0xBF, 0x0D, 0xE0, 0x01, 0xB9, 0x0D, 0xE0,
 0x02, 0xB9, 0x00, 0xE4, 0x0E, 0xBD, 0x0C, 0xE0, 0x0D, 0xBD, 0x0A, 0xE7, 0x07, 0xBD, 0x02, 0xE1,
 0x06, 0xBD, 0x18, 0xE0, 0x20, 0xE0, 0x22, 0x0F, 0x08, 0xD0, 0xD9, 0xF3, 0x00, 0x34, 0x08, 0xF0,
 0x23, 0x95, 0x1A, 0x95, 0xC1, 0xF7, 0x29, 0xBF, 0xF4, 0xCF, 0x01, 0x99, 0xFE, 0xCF, 0x01, 0xE0,
 0x01, 0x99, 0x08, 0x95, 0x03, 0x95, 0xE1, 0xF7, 0x01, 0x9B, 0xFE, 0xCF, 0x08, 0x95
};
const char          progName[] = "TINYLED.c";
const unsigned char progParms[]  = {  };
unsigned int        progSize;
unsigned char       flashMem[1024];
char                inbuf[8];
unsigned char       fuse = 0x0F;
boolean             hv1Mode = false;
boolean             hv2Mode = false;

#define  BIT_TIME  1
// Definitons for 5V Programmer
#define  VCC        2   // Pin 5 on ATtiny10
#define  TPICLK     3   // Pin 3 on ATtiny10
#define  TPIDAT     4   // Pin 1 on ATtiny10
#define  RESET      5   // Pin 6 on ATtiny10
#define  GND        6   // Pin 2 on ATtiny10
// Definitons for 12V Programmer (just different names for pins)
#define  SHDN       5   // 0 to turn on 12V, 1 to disable
#define  RELAY      6   // 1 to program, 0 to emulate
// Definitions for pins used to detect HV programmers
#define  HV1_DETECT A0  // Is LOW if HV Programmer (version 1, 2x DPDT relays)
#define  HV2_DETECT A1  // Is LOW if HV Programmer (version 2, 4 ch analog switch)

// Define IO Registers
#define  NVMCMD  0x33
#define  NVMCSR  0x32

// Define NVM Commands
#define  NO_OPERATION  0x00
#define  CHIP_ERASE    0x10
#define  SECTION_ERASE 0x14
#define  WORD_WRITE    0x1D

void setup () {
  // Check for HV Progammerw (HV1_DETECT or HV2_DETECT pin is LOW)
  pinMode(HV1_DETECT, INPUT_PULLUP);
  pinMode(HV2_DETECT, INPUT_PULLUP);
  delay(10);
  hv1Mode = digitalRead(HV1_DETECT) == LOW;
  hv2Mode = digitalRead(HV2_DETECT) == LOW;
  // Set flashMem to unprogrammed value and then copy program code into it
  memset(flashMem, 0xFF, sizeof(flashMem));
  memcpy_P(flashMem, program, sizeof(program));
  progSize = sizeof(program);
  Serial.begin(115200);
  disablePins();
  if (hv1Mode || hv2Mode) {
    pinMode(SHDN, OUTPUT);        // Connect SHDN
    if (hv1Mode) {
        digitalWrite(SHDN, HIGH); // 12v off
    } else {
        digitalWrite(SHDN, LOW);  // 12v off
    }
    pinMode(RELAY, OUTPUT);       // Connect RELAY
    digitalWrite(RELAY, LOW);     // Chip in Emulate mode (Relay Off)
    Serial.print("\x06\x06");     // Send ACK ACK sequence tp signal ready
  } else {
    pinMode(GND, OUTPUT);         // Connect GND
    digitalWrite(GND, LOW);       // GND Always Low
    if (sizeof(program) > 0) {
      printInstructions();
    } else {
      Serial.print("\x06\x06");   // Send ACK ACK sequence tp signal ready
    }
  }
}

void enablePins () {
  if (hv1Mode || hv2Mode) {
    digitalWrite(RELAY, HIGH);    // Chip in Program mode (Relay On)
    delay(200);
  }
  pinMode(VCC, OUTPUT);           // Connect VCC
  digitalWrite(VCC, LOW);         // VCC off
  pinMode(TPICLK, OUTPUT);        // Connect TPICLK
  digitalWrite(TPICLK, HIGH);     // Clk high
  pinMode(TPIDAT, INPUT);         // Connect TPIDAT
  digitalWrite(TPIDAT, HIGH);     // Enable pullup
  delay(10);
  if (!hv1Mode && !hv2Mode) {
    pinMode(RESET, OUTPUT);       // Connect RESET
    digitalWrite(RESET, HIGH);    // RESET Off
  }
  delay(200);
}

void disablePins () {
  pinMode(TPICLK, INPUT);       // Disconnect TPICLK
  pinMode(TPIDAT, INPUT);       // Disconnect TPIDAT
  pinMode(VCC, INPUT);          // Disconnect VCC
  digitalWrite(TPICLK, LOW);    // No pull up
  digitalWrite(TPIDAT, LOW);    // No pull up
  digitalWrite(VCC, LOW);       // No pull up
  if (hv1Mode || hv2Mode) {
    digitalWrite(RELAY, LOW);   // Chip in Emulate mode
  } else {
    pinMode(RESET, INPUT);      // Disconnect RESET
    digitalWrite(RESET, LOW);   // No pull up
  }
  delay(200);
}

void pulseClock () {
  digitalWrite(TPICLK, LOW);
  delayMicroseconds(BIT_TIME);
  digitalWrite(TPICLK, HIGH);
  delayMicroseconds(BIT_TIME);
}

void sendFrame (unsigned char data) {
  unsigned char tmp = data;
  // Write start bit
  pinMode(TPIDAT, OUTPUT);
  digitalWrite(TPIDAT, LOW);
  pulseClock();
  unsigned char check = 0;
  // Write data bits
  for (unsigned char ii = 0; ii < 8; ii++) {
    digitalWrite(TPIDAT, tmp & 1);
    check ^= tmp & 1;
    tmp >>= 1;
    pulseClock();
  }
  // Write check bit
  digitalWrite(TPIDAT, check);
  pulseClock();
  // Write stop bits
  digitalWrite(TPIDAT, HIGH);
  pulseClock();
  pinMode(TPIDAT, INPUT);
  pulseClock();
}

unsigned char readBit () {
  digitalWrite(TPICLK, LOW);
  delayMicroseconds(BIT_TIME);
  unsigned char data = digitalRead(TPIDAT) ? 1 : 0;
  digitalWrite(TPICLK, HIGH);
  delayMicroseconds(BIT_TIME);
  return data;
}

unsigned char readFrame () {
  pinMode(TPIDAT, INPUT);
  for (int ii = 0; ii < 256; ii++) {
    if (readBit() == 0) {
      // Start bit found
      unsigned char data = 0;
      unsigned char check = 0;
      for (unsigned char jj = 0; jj < 8; jj++) {
        unsigned char tmp = readBit();
        data >>= 1;
        data |= tmp != 0 ? 0x80 : 0x00;
        check ^= tmp & 1;
      }
      unsigned char tmp = readBit();
      readBit();
      readBit();
      if (tmp == check) {
        return data;
      }
      return 0xFF;
    }
  }
  Serial.println(F("Read timeout"));
  // Timeout, or error
  return 0xFF;
}

unsigned char enterProgMode () {
  sendFrame(0xE0);              // SKEY Opcode
  sendFrame(0xFF);              // Send 8 Byte Key
  sendFrame(0x88);
  sendFrame(0xD8);
  sendFrame(0xCD);
  sendFrame(0x45);
  sendFrame(0xAB);
  sendFrame(0x89);
  sendFrame(0x12);
  for (unsigned char ii = 0; ii < 100; ii++) {
    if ((readCtlSpace(0x00) & 0x02) != 0) {
      return 1;  // enabled
    }
  }
  Serial.println(F("Unable to select program mode"));
  return 0;      // timeout
}

void setPointerReg (unsigned int add) {
  sendFrame(0x68);          // SSTPR 0
  sendFrame(add & 0xFF);
  sendFrame(0x69);          // SSTPR 1
  sendFrame(add >> 8);
}

unsigned char readAndInc () {
  sendFrame(0x24);          // SLD++
  return readFrame();
}

void writeAndInc (unsigned char data) {
  sendFrame(0x64);          // SST++
  sendFrame(data);
}

unsigned char readIoSpace (unsigned char add) {
  sendFrame(0x10 | ((add & 0x30) << 1) | (add & 0x0F));  // SIN
  return readFrame();
}

void writeIoSpace(unsigned char add, unsigned char data) {
  sendFrame(0x90 | ((add & 0x30) << 1) | (add & 0x0F));  // SOUT
  sendFrame(data);
}

unsigned char readCtlSpace (unsigned char add) {
  sendFrame(0x80 | (add & 0x0F));   // SLDCS
  return readFrame();
}

void nvmWait () {
  while ((readIoSpace(0x32) & 0x80) != 0) {
    delay(BIT_TIME);    // Arbitrary delay
  }
}

boolean powerOn () {
  enablePins();
  digitalWrite(VCC, HIGH);        // VCC on
  delay(128);                     // Wait 128 ms
  if (hv1Mode) {
    digitalWrite(SHDN, LOW);      // 12v On
  } else if (hv2Mode) {
    digitalWrite(SHDN, HIGH);     // 12v On
  } else {
    digitalWrite(RESET, LOW);     // RESET On
  }
  delay(10);                      // Wait 10 ms
  digitalWrite(TPIDAT, HIGH);     // Data high
  pinMode(TPIDAT, OUTPUT);
  for (unsigned char ii = 0; ii < 32; ii++) {
    pulseClock();
  }
  return true;
}

void powerOff () {
  if (hv1Mode) {
    digitalWrite(SHDN, HIGH);     // 12v Off
  } else if (hv2Mode) {
    digitalWrite(SHDN, LOW);      // 12v Off
  } else {
    digitalWrite(RESET, HIGH);    // RESET Off
  }
  delay(128);                     // Wait 128 ms
  digitalWrite(VCC, LOW);         // VCC off
  disablePins();
}

/*
 *  0x1E, 0x8F, 0x0A  ATtiny4
 *  0x1E, 0x8F, 0x09  ATtiny5
 *  0x1E, 0x90, 0x08  ATtiny9
 *  0x1E, 0x90, 0x03  ATtiny10
 */
boolean printSignature () {
  if (powerOn()) {
    if (enterProgMode()) {
      // Read device signature
      Serial.println();
      Serial.print(F("Device: "));
      setPointerReg(0x3FC0);        // Device Id Bytes
      unsigned char sig[3];
      for (unsigned char ii = 0; ii < 3; ii++) {
        if (ii > 0) {
          Serial.print(", ");
        }
        printHex(sig[ii] = readAndInc());
      }
      if (sig[0] == 0x1E) {
        if (sig[1] == 0x8f) {
          if (sig[2] == 0x0A) {
            Serial.println(F(" - ATTiny4"));
          } else if (sig[2] == 0x09) {
            Serial.println(F(" - ATTiny5"));
          }
        } else if (sig[1] == 0x90) {
          if (sig[2] == 0x08) {
            Serial.println(F(" - ATTiny9"));
          } else if (sig[2] == 0x03) {
            Serial.println(F(" - ATTiny10"));
          }
        }
      }
      Serial.println();
    }
    powerOff();
    return true;
  } else {
    powerOff();
    return false;
  }
}

// Read 1 second half cycle signal on TPIDAT Input
void measureClock () {
  enablePins();
  digitalWrite(VCC, HIGH);      // VCC on
  delay(200);
  boolean state, lState = digitalRead(TPIDAT);
  unsigned char hi = 0xFF, lo = 0x00, mid = 0x80, sel;
  long lowest = 1000000;
  // Verify TPIDAT signal is changing before measuring time interval
  unsigned long timeout = millis();
  Serial.print(F("Measuring Clock."));
  do {
    // Must see TPIDAT change within 2 seconds, or timeout
    if ((millis() - timeout) > 2000) {
      Serial.println(F("Timeout"));
      powerOff();
      return;
    }
    state = digitalRead(TPIDAT);
  } while (state == lState);
  do {
    setClockTweak(mid);
    delay(1000);
    do {
      state = digitalRead(TPIDAT);
    } while (state == lState);
    long sTime = micros();
    lState = state;
    do {
      state = digitalRead(TPIDAT);
    } while (state == lState);
    long eTime = micros();
    lState = state;
    long diff = eTime - sTime;
    Serial.print(".");
    if (diff < 1000000) {
      hi = mid;
    } else {
      lo = mid;
    }
    if (diff < lowest) {
      lowest = diff;
      sel = mid;
    }
    mid = (hi + lo) / 2;
  } while (abs(hi - lo) > 1);
  Serial.print(F("\nRecommended Clock Offset: 0x"));
  Serial.println(mid, HEX);
  digitalWrite(VCC, LOW);       // VCC off
  disablePins();
}

void setClockTweak (unsigned char val) {
  digitalWrite(TPICLK, LOW);        // Short Pulse
  delayMicroseconds(1000);
  digitalWrite(TPICLK, HIGH);
  delay(1);
  for (int ii = 0; ii < 8; ii++) {
    int width = (val & 0x80) != 0 ? 80 : 20;
    val = val << 1;
    digitalWrite(TPICLK, LOW);      // Short Pulse
    delayMicroseconds(width);
    digitalWrite(TPICLK, HIGH);
    delay(1);
  }
}

void printFuse () {
  if (powerOn()) {
    if (enterProgMode()) {
      // Read device signature
      Serial.print(F("Fuse:  "));
      setPointerReg(0x3F40);        // Configuration Byte
      printHex(readAndInc());
      Serial.println();
    }
  }
  powerOff();
}

void writeFlash (unsigned char fuseByte) {
  if (powerOn()) {
    if (enterProgMode()) {
      Serial.print(F("\nProgramming Flash and Fuse"));
      // Erase all flash bytes
      writeIoSpace(NVMCMD, CHIP_ERASE);
      setPointerReg(0x4001);
      writeAndInc(0x00);    // Write dummy high byte
      nvmWait();
      writeIoSpace(NVMCMD, NO_OPERATION);
      nvmWait();
      // Erase Config Section
      writeIoSpace(NVMCMD, SECTION_ERASE);
      setPointerReg(0x3F41);
      writeAndInc(0x00);    // Write dummy high byte
      nvmWait();
      writeIoSpace(NVMCMD, NO_OPERATION);
      nvmWait();
      // Write config byte (Note: bits are inverted, so '0' value is ON)
      writeIoSpace(NVMCMD,WORD_WRITE);
      setPointerReg(0x3F40);
      writeAndInc(fuseByte | 0xF8);    // Config Byte
      writeAndInc(0xFF);
      writeIoSpace(NVMCMD, NO_OPERATION);
      nvmWait();
      // Write program to flash memory
      writeIoSpace(NVMCMD,WORD_WRITE);
      setPointerReg(0x4000);
      for (int ii = 0; ii < progSize; ii += 2) {
        writeAndInc(flashMem[ii]);      // Low byte
        writeAndInc(flashMem[ii + 1]);  // High byte
        nvmWait();
        if ((ii & 0x0F) == 0) {
          Serial.print(".");
        }
      }
      writeIoSpace(NVMCMD, NO_OPERATION);
      nvmWait();
      Serial.print(F("Done - "));
      Serial.print(progSize, DEC);
      Serial.println(F(" bytes written"));
      Serial.print(F("Fuse byte set to: "));
      printHex(fuseByte);
      Serial.println();
    }
  }
  powerOff();
}

void writeFuse (unsigned char fuseByte) {
  if (powerOn()) {
    if (enterProgMode()) {
      // Erase Config Section
      writeIoSpace(NVMCMD, SECTION_ERASE);
      setPointerReg(0x3F41);
      writeAndInc(0x00);    // Write dummy high byte
      nvmWait();
      writeIoSpace(NVMCMD, NO_OPERATION);
      nvmWait();
      // Write config byte (Note: bits are inverted, so '0' value is ON)
      writeIoSpace(NVMCMD,WORD_WRITE);
      setPointerReg(0x3F40);
      writeAndInc(fuseByte | 0xF8);    // Config Byte
      writeAndInc(0xFF);
      writeIoSpace(NVMCMD, NO_OPERATION);
      nvmWait();
      Serial.print(F("Fuse byte set to: "));
      printHex(fuseByte);
      Serial.println();
    }
  }
  powerOff();
}

unsigned int newDigit (unsigned int cVal, unsigned char digit) {
  cVal <<= 4;
  if (digit >= 'A'  &&  digit <= 'F') {
    cVal += digit - 'A' + 10;
  } else {
    cVal += digit - '0';
  }
  return cVal;
}

  // Implements a state machine that handles a HEX download from the IDE
void download () {
  unsigned char state = 0;
  unsigned char len, type, data, check, fuse;
  unsigned int  add;
  unsigned long timeout = millis();;
  progSize = 0;
  while (true) {
    if (Serial.available() > 0) {
      unsigned char cc = Serial.read();
      timeout = millis();
      if (cc == ':') {                    // Start of HexAscii line
        state = 1;
        len = 0;
        check = 0;
        add = 0;
      } else if (cc == '*') {             // Start of Fuse line
        fuse = 0xFF;
        state = 20;                       // goto Read Fuse state
      } else {
        switch (state) {
        case 1:                           // Length MSD
        case 2:                           // Length LSD
          len = newDigit(len, cc);
          state++;
          break;
        case 3:                           // Address MSD
        case 4:
        case 5:
        case 6:                           // Address LSD
          add = newDigit(add, cc);
          state++;
          break;
        case 7:                           // Type MSD
          type = newDigit(0, cc);
          state++;
          break;
        case 8:                           // Type LSD
          type = newDigit(type, cc);
          if (len > 0) {
            state++;
          } else {
            state = 11;
          }
          break;
        case 9:                           // Data byte MSD
          data = newDigit(0, cc);
          state++;
          break;
        case 10:                          // Data byte LSD
          data = newDigit(data, cc);
          if (type == 0) {
            flashMem[add++] = data;
            progSize++;
          }
          if (--len > 0) {
            state = 9;                    // Get another data byte
          } else {
            state = 11;                   // Get checksum
          }
          break;
        case 11:                          // Checksum MSD
        case 12:                          // Checksum LSD
          check = newDigit(check, cc);
          state++;
          break;
        case 13:                          // Wait for CR/LF
          if (cc == 0x0A  ||  cc == 0x0D) {
            switch (type) {
            case 0:                       // Data record
              Serial.print(".");
              break;
            case 1:                       // EOF Record
              if (progSize > 0) {
                writeFlash(fuse);
              } else {
                writeFuse(fuse);
              }
             return;
            case 2:                       // Start of Record (actually extended segment address record)
              // Set buffer space and fuse byte to unprogrammed flash value (0xFF)
              memset(flashMem, 0xFF, sizeof(flashMem));
              fuse = 0xFF;
              break;
            }
            state = 0;
          }
          break;
        case 20:                          // Read Fuse LS Byte
          fuse = newDigit(fuse, cc);
          state = 0;
          break;
        }
      }
    } else {
      // Check for 2 second timeout;
      if ((millis() - timeout) > 2000) {
        Serial.println(F(".Timeout"));
        return;
      }
    }
  }
}

void printInstructions () {
  int ardPins[] = {2, 3, 4, 5, 6};
  int tnyPins[] = {5, 3, 1, 6, 2};
  if (sizeof(program) > 0) {
    Serial.print(F("Programmer for: "));
    Serial.println(progName);
  }
  Serial.println(F("Connect:"));
  for (int ii = 0; ii < 5; ii++) {
    Serial.print(F("  Arduino pin D"));
    Serial.print(ardPins[ii], DEC);
    Serial.print(F(" to ATtiny10 pin "));
    Serial.println(tnyPins[ii]);
  }
  Serial.println(F("Commands:\n  P - Program ATtiny10\n  I - Identify ATtiny10\n  K - Run Clock Calibration"));
  if (sizeof(progParms) > 0) {
    Serial.println(F("  C - Change Parameters"));
  }
}

// Get '\n'-terminated string and return length
unsigned char getString () {
  unsigned char idx = 0;
  while (true) {
    if (Serial.available()) {
      char cc = toupper(Serial.read());
      if (cc == '\r') {
        // Ignore
      } else if (cc == '\n') {
        inbuf[idx] = 0;
        return idx;
      } else {
        inbuf[idx++] = cc;
      }
    }
  }
}

void printHex (unsigned char val) {
  Serial.print("0x");
  if (val < 16) {
    Serial.print("0");
  }
  Serial.print(val, HEX);
}

unsigned int readDecimal () {
  unsigned int val = 0;
  unsigned char off = 0;
  char cc;
  while ((cc = inbuf[off++]) != 0 && cc >= '0' && cc <= '9') {
    val = (val * 10) + (byte) (cc - '0');
  }
  return val;
}

void loop () {
  while (true) {
    if (Serial.available() > 0) {
      unsigned char cc = toupper(Serial.read());
      switch (cc) {
        case 'I':
          // Identify connected ATtiny device
          printSignature();
          break;
        case 'C':
          // Change exported parameters
          if (progParms != 0 && sizeof(progParms) > 0) {
            delay(200);
            while (Serial.available()) {
              Serial.read();
            }
            Serial.println(F("\nType <new> + enter to change, else enter:"));
            byte ii = 0;
            byte state = 0;
            unsigned int add;
            unsigned char cc;
            unsigned int val;
            while (ii < sizeof(progParms)) {
              switch (state) {
                case 0:
                  cc = progParms[ii++];
                  if (cc == 0) {
                    state++;
                  } else {
                    Serial.write(cc);
                  }
                  break;
                case 1:
                  byte size = progParms[ii++];
                  add = (unsigned int) progParms[ii++] << 8;
                  add |= progParms[ii++];
                  Serial.print(" = ");
                  if (size == 2) {
                    val = flashMem[add + 1] << 8 + flashMem[add];
                  } else if (size == 1) {
                    val =  flashMem[add];
                  }
                  Serial.print(val, DEC);
                  Serial.print(" ?");
                  if (getString() > 0) {
                    val = readDecimal();
                    Serial.print(F(" Changed to "));
                    Serial.println(val, DEC);
                    if (size == 2) {
                      flashMem[add] = val & 0xFF;
                      flashMem[add + 1] = val >> 8;
                    } else if (size == 1) {
                      flashMem[add] = val;
                    }
                  } else {
                    Serial.println(F(" Unchanged"));
                  }
                  state = 0;
                  break;
              }
            }
            Serial.println(F("Done"));
          }
          break;
        case 'P':
          // Program ATtiny
          writeFlash(fuse);
          break;
        case'D':
          download();
          break;
        case '?':
          printInstructions();
          break;
        case 'M':
          measureClock();
          break;
        case 'K':
          memset(flashMem, 0xFF, sizeof(flashMem));
          memcpy_P(flashMem, clockCal, sizeof(clockCal));
          progSize = sizeof(clockCal);
          writeFlash(0x0B);
          measureClock();
          // Restore built-in program
          memset(flashMem, 0xFF, sizeof(flashMem));
          memcpy_P(flashMem, program, sizeof(program));
          progSize = sizeof(program);
          break;
        case 'S':
          printSignature();
          break;
        case 'F':
          printFuse();
          break;
        case 'V':
          pinMode(VCC, OUTPUT);
          digitalWrite(VCC, HIGH);      // VCC on
          Serial.println(F("VCC on"));
          break;
        case 'X':
          digitalWrite(VCC, LOW);       // VCC off
          pinMode(VCC, INPUT);
          Serial.println(F("VCC off"));
          break;
        case 'T':
          if (hv1Mode) {
            Serial.print(F("hv1Mode\n"));
          } else if (hv2Mode) {
            Serial.print(F("hv2Mode\n"));
          } else {
            Serial.print(F("Non HV\n"));
          }
          break;
        case '*':
          Serial.write(0x1B);           // Respond with ESC code
          break;
      }
    }
  }
}