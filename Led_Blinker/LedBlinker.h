#ifndef LED_BLINKER_H
#define LED_BLINKER_H

#include <Arduino.h>
#include "Led.h"

class LedBlinker
{
private:
  Led led; // calling class within a class, notice how Led starts as thats the other header file

  void toggleLed(); // private attributes cannot be called in main file but can be in the cpp file (remember this)

public:
  LedBlinker() {} // do not use, default constructor
  LedBlinker(Led &led); // just like from private, the & avoids duplication of object, and it will reference previous class

  void initLed();
};

#endif