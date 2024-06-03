#include "PushButton.h"
#define Button_PIN 2

PushButton button(Button_PIN); // creating an object of the class and the parameter is the pin number which is 2


void setup() {
  Serial.begin(9600);
  button.init(); //initialise the mode of the pin for the button (no need to worry about which pin is used)

}

void loop() {
  Serial.println(button.readState()); //reading the state of the board through calling the function in the class
  delay(100);

}
