class Pad {
  public :
  Pad(uint8_t pDgt) {
    pinNum = pNum;
      if(pDgt == 12) {
        resVal[] = {1023,930,850,790,730,680,640,600,570,540,510,490};
        rtnVal[] = {0,1,2,3,4,5,6,7,10,8,11,9};
      } else if(pDgt == 16) {
        resVal[] = {1023,930,850,790,680,640,600,570,512,487,465,445,410,330,277,238};
        rtnVal[] = {1,2,3,4,5,6,7,8,10,11,12,13,14,15,16,17};
      }
  }


  int readKey();

  private :
  int resVal[20];
  int rtnVal[20];
  uint8_t pinNum;
};
