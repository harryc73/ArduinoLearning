#ifndef LED_H //if not defined
#define LED_H // used for the class to be written once

#include <Arduino.h> // for header files, you need to include this to use arudino functionality

class Led 
{
private:
  byte _pin;
public:

  // A deafualt constructors has 0 parameters, if you do not add you may have a compilation error

  Led() {} // Do not use

  Led(byte pin)
  {
    // Use this when there is a double up of names
    this->_pin = pin;
    // You can use: _pin = pin;
  }

  void init() // initialiser just like python oop
  {
    pinMode(_pin, OUTPUT);
  }

  void init(byte defaultState) // Here calling methods of class to make it work, just like you would do it in main in python, you use the intialiser
  {
    init();
    if (defaultState == HIGH) {
      on();
    }
    else {
      off();
    }
  }

  void on() // use void to make new functions
  {
    digitalWrite(_pin, HIGH);
  }

  void off()
  {
    digitalWrite(_pin, LOW);
  }
};
#endif // used for when this file is included from other files