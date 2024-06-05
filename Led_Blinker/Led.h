#ifndef LED_H //if not defined
#define LED_H // used for the class to be written once
// there is the decleration of the class
#include <Arduino.h> // for header files, you need to include this to use arudino functionality

class Led 
{
private:
  byte _pin; //example of encapsulation, can't change pin
public:

  // A deafualt constructors has 0 parameters, if you do not add you may have a compilation error

  Led() {} // Do not use
  Led(byte pin); // Here is the constructor, where the pin number is provided

  // initalise the pin for the LED
  // call this in setup()
  void init();
  void init(byte defaultState); // Here the interface is seperated from the implementation, gives clear overview of what the class is about

  // power on the LED
  void on();
  // power off the LED
  void off();

  // power on/off the LED depending on previous state
  void toggle();
};
#endif // used for when this file is included from other files