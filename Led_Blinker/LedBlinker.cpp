#include "LedBlinker.h"

LedBlinker::LedBlinker(Led &led) // must use & for future constructor calls
{
  this->led = led;
  lastTimeBlinked = millis();
  blinkDelay = 500; // blink delay is 500, the LED blinks every 500 ms
}

LedBlinker::LedBlinker(Led &led, unsigned long BlinkDelay) // it is a function because up top is parent class
{
  this->led = led;
  lastTimeBlinked = millis();
  this->blinkDelay = blinkDelay; //intialisaing blink delay
}

void LedBlinker::initLed()
{
  led.init(); // using init method which is a public method of the LED class
}

 void LedBlinker::toggleLed()
 {
  led.toggle(); //
 }

 void LedBlinker::update() // this acts as a loop and uses functions and paramters from previous classes
 {
  unsigned long timeNow = millis();
  if (timeNow - lastTimeBlinked > blinkDelay){ // wil act as a delay without stopping the whole program, Checking duration since last tiem blinked is greater than the blink delay to check how many milliseconds have passed
    lastTimeBlinked = timeNow;
    toggleLed();
  }
 }

unsigned long LedBlinker::getBlinkDelay() // the getter, getting the value of the Blink Delay
{
  return blinkDelay;
}
void LedBlinker::setBlinkDelay(unsigned long BlinkDelay)
{
  this->blinkDelay = blinkDelay;
}