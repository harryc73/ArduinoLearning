#include "PushButton.h"
#define Button_PIN 3

PushButton button(Button_PIN, true, true); // creating an object of the class and the parameter is the pin number which is 2
// true true is there because are using pullup resistor and it is activcated as per the if statement in the void function

void setup() {
  Serial.begin(9600);
  button.init(); //initialise the mode of the pin for the button (no need to worry about which pin is used)
}

void loop() {
  if (button.isPressed()){ // calling the is pressed function instead of using read state
    Serial.println("Button is pressed");
  }
  else{
    Serial.println("Button is not pressed");
  }
  delay(100);
}