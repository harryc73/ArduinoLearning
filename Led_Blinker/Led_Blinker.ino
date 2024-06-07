#include "Led.h"
#include "LedBlinker.h"

#define LED_PIN 11

Led led(LED_PIN); // notice how LED_PIN are the paratmeter being passed through, hence making an object passed into the class
LedBlinker ledBlinker(led);


void setup() {
  ledBlinker.initLed();
  
}

void loop() {
  ledBlinker.update(); // no need to pass parameters through it will work simultanously

}
