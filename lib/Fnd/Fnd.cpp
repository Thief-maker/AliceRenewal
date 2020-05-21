#include <Fnd.h>

void Fnd::show(int pDigits, int showNum) {
  for(int i = startPinNum; i <= posPinNum; i++) {
    if(i == pDigits) {
      writeSgn(i, SSD);
    } else {
      writeSgn(i, SSU);
    }
  }

  for(int i = 0; i <= 7; i++) {
    byte segment = (truthTable[showNum] & (0x01 << i)) >> i;
    if(segment == 1) {
      writeSgn(endPinNum - i, SSU);
    } else {
      writeSgn(endPinNum - i, SSD);
    }
  }
}

void Fnd::count(int startNum, int finishNum) {
  for(int i = startNum; i < finishNum; i++) {
    for(int j = startNum; j < finishNum; j++) {
      for(int k = startNum; k < finishNum; k++) {
        for(int l = startNum; l < finishNum; l++) {
          show(1,i);          delay(delayTime);
          show(2,j);          delay(delayTime);
          show(3,k);          delay(delayTime);
          show(4,l);          delay(delayTime);
        }
      }
    }
  }
  delay(1000);
}
