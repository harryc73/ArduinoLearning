#include "Led.h"
#include "PushButton.h"

#define RED_LED_PIN 13
#define YELLOW_LED_PIN 12
#define GREEN_LED_PIN 11
#define BUTTON_PIN 2

Led redLed(RED_LED_PIN);
Led yellowLed(YELLOW_LED_PIN);
Led greenLed(GREEN_LED_PIN);
PushButton button(BUTTON_PIN, true, true);

void setup() {
  redLed.init(); // initialising all of the objects 
  yellowLed.init(); // works well with the LED class
  greenLed.init(); // overall code provides ease of not having to repeat, classes
  button.init();

}

void loop() { // code is super clear
  if (button.isPressed()){
    redLed.on();
    yellowLed.off();
    greenLed.on();
  }
  else{
    redLed.off();
    yellowLed.on();
    greenLed.off();
  }

}
