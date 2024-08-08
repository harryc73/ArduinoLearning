#ifndef LED_BLINKER_H
#define LED_BLINKER_H

#include <Arduino.h>
#include "Led.h"

class LedBlinker
{
private:
  Led led; // calling class within a class, notice how Led starts as thats the other header file
  unsigned long lastTimeBlinked;// allows to not toggle the led before the blink delay takes place 
  unsigned long blinkDelay; // while it is private there is a way to change the blink delay, but cannot be changed after creating the ibject

  void toggleLed(); // private attributes cannot be called in main file but can be in the cpp file (remember this)

public:
  LedBlinker() {} // do not use, default constructor
  LedBlinker(Led &led); // just like from private, the & avoids duplication of object, and it will reference previous class
  LedBlinker(Led &led, unsigned long BlinkDelay); // added blink delay as a new parameter within the constructor

  void initLed();

  void update(); // will act the same as a loop, exports the functionality from the loop without using delay, used when updating the output according to input

  unsigned long getBlinkDelay(); // getter, getting the blink delay value
  void setBlinkDelay(unsigned long BlinkDelay); // setter, to modify it, it is function
};

#endif