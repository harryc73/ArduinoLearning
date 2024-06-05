#include "LedBlinker.h"

LedBlinker::LedBlinker(Led &led) // must use & for future constructor calls
{
  this->led = led;
}

void LedBlinker::initLed()
{
  led.init(); // using init method which is a public method of the LED class
}

 void LedBlinker::toggleLed()
 {
  
 }