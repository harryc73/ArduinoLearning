#include "Led.h"
#include "LedBlinker.h"

#define RED_LED_PIN 13
#define YELLOW_LED_PIN 12
#define GREEN_LED_PIN 11

Led redLed(RED_LED_PIN); // notice how LED_PIN are the paratmeter being passed through, hence making an object passed into the class
Led yellowLed(YELLOW_LED_PIN);
Led greenLed(GREEN_LED_PIN);


LedBlinker redLedBlinker(redLed); // changing all the parameters and calls to the colour of the LED, not sure why or how, maybe so definition isnt doubled
LedBlinker yellowLedBlinker(yellowLed); // adding extra parameter as it is the blink delay in milliseconds from the class, and it is a public value 
LedBlinker greenLedBlinker(greenLed); // the words before the brackets are the objects being created

void setup() {
  redLedBlinker.initLed(); // all objects initialised
  yellowLedBlinker.initLed();
  greenLedBlinker.initLed();
  
}

void loop() {
  redLedBlinker.update(); // no need to pass parameters through it will work simultanously
  yellowLedBlinker.update();
  greenLedBlinker.update();
}
