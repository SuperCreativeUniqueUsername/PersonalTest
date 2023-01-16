// code written but Griffin Frankiw for the EECERT program

#define pinPotent A1
#define pinLed 11
int x;

void setup() {
  // sets up the pins on the arduino
  pinMode(pinPotent, INPUT);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  x = analogRead(pinPotent);
  analogWrite(pinLed, x);
}
