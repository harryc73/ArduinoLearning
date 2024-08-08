// both the h and cpp files are linked
// This is the logic of the class
#include "Led.h"

// Led:: has to be added to all void methods where the constructor is present

Led::Led(byte pin)
  {
    // Use this when there is a double up of names
    this->_pin = pin;
    // You can use: _pin = pin;
    state = LOW; // intialising state in the contrusctor so it has a default value
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
    state = HIGH; // making the state high so HIGH can be stored as a varaible so can be called later in toggle
    digitalWrite(_pin, state); // self explanatory, turning on the LED
  }

  void Led:: off()
  {
    state= LOW;
    digitalWrite(_pin, state); // replacing it with state so it can be called in toggle for abstraction
  }

  bool Led::isPoweredOn()
  {
    return (state == HIGH); // higher level context function so state == high can be replaced
  }

  void Led::toggle()
  {
    if (isPoweredOn()){
      off();
    }
    else{
      on();
    }
  }