#include "PushButton.h" //including header file


PushButton :: PushButton(byte pin, bool isPullUp, 
                        bool internalPullUpActivated) // Updating with the new parameters of the function
{
  this->pin = pin; // for collision in the code, arrow pin is attribute from class,and other is paramter
  this->isPullUp = isPullUp;
  this->internalPullUpActivated = internalPullUpActivated;
} 

void PushButton :: init()
{
  if (isPullUp && internalPullUpActivated){
  pinMode(pin, INPUT_PULLUP); // intialise mode for pin // PULLUP is for when there is no resistor
  }

  readState();
}

byte PushButton :: readState()
{
  state = digitalRead(pin); 
  return state;
} 