#include <Arduino.h>

#ifdef SHIFT_REG
#include <shifty.h>
#include <shiftIn.h>

ShiftIn<1> sIn;
Shifty sOut;

// Input Shift Register
#define PL A5           //pLoadPin
#define CE 0            //clockEnablePin
#define DS 3            //dataPin
#define CP 1            //clockPin
#define readSgn sIn;

// Output Shift Register
#define SETCHIP(x) sOut.setBitCount((x)*8)
#define SER 4            //serialInputPin
#define SRCLK 10         //shiftRegisterClockPin
#define RCLK 5           //RegistarClockPin Latch
#define writeSgn sOut.writeBit

#endif
