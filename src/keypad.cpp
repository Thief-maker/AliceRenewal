#include <Arduino.h>
#include <keypad.h>

int keypad::readKey() {
  int chk;
  //int tNum = sizeof(resVal[]/int);

  for(int i = 0; i < tNum; i++) {
    chk = analogueRead(pinNum);
    //if(chk == resVal[i]) {
    //  return rtnVal[i];
    }
    delay(1);
  }
}
