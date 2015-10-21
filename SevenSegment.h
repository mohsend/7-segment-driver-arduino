/*
 * 
 */

#ifndef SevenSegment_h
#define SevenSegment_h 1

#include <Arduino.h>

class sevenSegment
{
  public:
    sevenSegment(int clock, int data);
    void sendByte(byte p);
    void showHex(byte x);
  private:
    int _clock;
    int _data;
};

#endif
