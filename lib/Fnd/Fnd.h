class Fnd {
  Fnd(int sNum, int pDgt, char eTyp) {
    startPinNum = sNum;
    posPinNum = sNum + pDgt;
    endPinNum = sNum + pDgt + 7;
    if(eTyp == 'A') {
      SSU = 0;
      SSD = 1;
    } else if(eTyp == 'C') {
      SSU = 1;
      SSD = 0;
    }
  }
  private :
    int SSU;
    int SSD;
    int startPinNum;
    int posPinNum;
    int endPinNum;
    byte truthTable[] = {
      B11111100,            //0
      B01100000,            //1
      B11011010,            //2
      B11110010,            //3
      B01100110,            //4
      B10110110,            //5
      B10111110,            //6
      B11100100,            //7
      B11111110,            //8
      B11110110,            //9
      B11101110,            //A
      B00111110,            //B
      B10011100,            //C
      B01111010,            //D
      B10011110,            //E
      B10001110,            //F
      B10111100,            //G
      B01101110             //H
    };
    const int delayTime = 5;

  public :
    void show(int pDigits, int showNum);
    void count(int startNum, int finishNum);
};
