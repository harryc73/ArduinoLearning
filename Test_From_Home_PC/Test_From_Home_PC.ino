#define LED_PIN 11

class Led 
{
private:
  byte _pin;
public:

  // A deafualt constructors has 0 parameters, if you do not add you may have a compilation error

  Led() {} // Do not use

  Led(byte pin)
  {
    // Use this when there is a double up of names
    this->_pin = pin;
    // You can use: _pin = pin;
  }

  void init() // initialiser just like python oop
  {
    pinMode(_pin, OUTPUT);
  }

  void init(byte defaultState) // Here calling methods of class to make it work, just like you would do it in main in python, you use the intialiser
  {
    init();
    if (defaultState == HIGH) {
      on();
    }
    else {
      off();
    }
  }

  void on() // use void to make new functions
  {
    digitalWrite(_pin, HIGH);
  }

  void off()
  {
    digitalWrite(_pin, LOW);
  }
};

Led led(LED_PIN);

void setup() {
  led.init();
}

void loop() {
  led.on();
  delay(500);
  led.off();
  delay(500);
}
