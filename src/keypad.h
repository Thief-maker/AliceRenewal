#include <Arduino.h>


class keypad {
  keypad(int pNum, int pDgt) {
    pinNum = pNum;
      if(pDgt == 12) {
        //int resVal[] = {1023,930,850,790,730,680,640,600,570,540,510,490};
        //int rtnVal[] = {0,1,2,3,4,5,6,7,10,8,11,9};
      } else if(pDgt == 16) {
        //int resVal[] = {1023,930,850,790,680,640,600,570,512,487,465,445,410,330,277,238};
        //int rtnVal[] = {1,2,3,4,5,6,7,8,10,11,12,13,14,15,16,17};
      }
  }
  private :
  int pinNum;

  public :
  int readKey();
};
