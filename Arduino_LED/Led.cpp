// both the h and cpp files are linked
// This is the logic of the class
#include "Led.h"

// Led:: has to be added to all void methods where the constructor is present

Led::Led(byte pin)
  {
    // Use this when there is a double up of names
    this->_pin = pin;
    // You can use: _pin = pin;
  }

  void Led::init() // initialiser just like python oop
  {
    pinMode(_pin, OUTPUT);
  }

  void Led::init(byte defaultState) // Here calling methods of class to make it work, just like you would do it in main in python, you use the intialiser
  {
    init();
    if (defaultState == HIGH) {
      on();
    }
    else {
      off();
    }
  }

  void Led:: on() // use void to make new functions
  {
    digitalWrite(_pin, HIGH);
  }

  void Led:: off()
  {
    digitalWrite(_pin, LOW);
  }