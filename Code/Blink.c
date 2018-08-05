/*
    Blink

    Turns an LED on for one millisecond, then off for one millisecond, repeatedly.

    This code was modified by Kollins Lima (August 01, 2018).

    The original code is available at:
    http://www.arduino.cc/en/Tutorial/Blink
*/

int output_pin = LED_BUILTIN;

// the setup function runs once when you press reset or power the board
void setup() {
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(output_pin, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(1);                         // wait for a millisecond
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(1);                         // wait for a millisecond
}
