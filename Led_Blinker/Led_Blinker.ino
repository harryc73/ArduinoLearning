#include "Led.h"
#include "LedBlinker.h"

#define LED_PIN 13

Led led(LED_PIN); // notice how LED_PIN are the paratmeter being passed through, hence making an object passed into the class
LedBlinker ledBlinker(led);


void setup() {
  ledBlinker.initLed();
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
