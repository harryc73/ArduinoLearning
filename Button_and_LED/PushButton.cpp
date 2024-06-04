#include "PushButton.h" //including header file


PushButton::PushButton(byte pin, bool isPullUp, // This is the constructor, where variables/class attributes are intialised
                        bool internalPullUpActivated) // Updating with the new parameters of the function
{
  this->pin = pin; // for collision in the code, arrow pin is attribute from class,and other is paramter
  this->isPullUp = isPullUp;
  this->internalPullUpActivated = internalPullUpActivated;

  lastTimeStateChanged = millis();
  debounceDelay = 50;
} 

void PushButton::init()
{
  if (isPullUp && internalPullUpActivated){
  pinMode(pin, INPUT_PULLUP); // intialise mode for pin // PULLUP is for when there is no resistor (Pullup is build in)
  }
  else{
    pinMode(pin, INPUT); // for when there there is an actual resistor
  }
  state = digitalRead(pin);
}

void PushButton::readState()
{
  unsigned long timeNow = millis();
  if (timeNow - lastTimeStateChanged > debounceDelay){ //check the difference of time between the current time and the last time the button state has changed
    byte newState = digitalRead(pin); //If state is unchanged you can read the state with the new variable
    if (newState != state){ // if the state has changed
      state = newState; // to change the current to state the new state avoiding bounce delay
      lastTimeStateChanged = timeNow; // state updated the last time to current time to remove bounce delay
    }
  } // no need to return state because the state here is available in the private attribute so can be called
} 

bool PushButton::isPressed() // must do this for functions made in the header file, here is the implementation
{
  readState();
  if (isPullUp){
    return (state == LOW); // the pullup resistor is activated to there is no resistance therefore the arduino resistor is not being activated so no button is pressed
  }
  else {
    return (state == HIGH);// the pullup resistor is not activated so the button is being pressed
  }
}