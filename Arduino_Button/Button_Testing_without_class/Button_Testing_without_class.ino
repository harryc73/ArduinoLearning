const int buttonPin = 7;

int buttonState = 0; // variable integer for reading pushbutton status

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin); // reading the button
  Serial.println(buttonState); // writing the button
  delay(100);
}
