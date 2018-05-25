/*
  Blink

  Turns an LED on for one microsecond, then off for one microsecond, repeatedly.

  This code was modified by Kollins Lima (May 25, 2018).

  The original code is available at:
  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(1);             // wait for a microsecond
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delayMicroseconds(1);             // wait for a microsecond
}
