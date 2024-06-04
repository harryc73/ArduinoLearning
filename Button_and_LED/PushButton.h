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

  unsigned long lastTimeStateChanged; // Keeping track of the last time the state of the button is changed
  unsigned long debounceDelay; // after the state has changed ignore state of button for a bit because button state has changed

  void readState(); // not possible to call this otside class (functions can be private)



public:
  PushButton() {} // OG constructor call (Do not touch)
  PushButton(byte pin, bool isPullUp, bool internalPullUpActivated ); // Constructor call, using the byte pin number High/Low

  void init(); // intialising method
   // Getting the state of the button, its a byte as up above

  bool isPressed(); // to see when the button is pressed using abstraction
};

#endif