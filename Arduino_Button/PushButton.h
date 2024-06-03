#ifndef PUSH_BUTTON_H
#define PUSH_BUTTON_H

#include <Arduino.h>
class PushButton
{
private:
  byte pin; // Calling pin number just like led
  byte state; // getting state/voltag of pin and number

  bool isPullUp; // Are we using pull up resistor
  bool internalPullUpActivated; // is an external pull up being used (both to know the configuration of the hardware)

public:
  PushButton() {} // OG constructor call (Do not touch)
  PushButton(byte pin, bool isPullUp, bool internalPullUpActivated ); // Constructor call, using the byte pin number High/Low

  void init(); // intialising method
  byte readState(); // Getting the state of the button, its a byte as up above
};

#endif