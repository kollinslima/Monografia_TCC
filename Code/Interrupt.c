/*
    Interrupt

    Change state of output pin based on an interrupt event

    This code was modified by Kollins Lima (August 05, 2018).

    The original code is available at:
    https://www.arduino.cc/reference/en/language/functions/external-interrupts/attachinterrupt/
*/

const byte ledPin = 9;
const byte interruptPin = 2;
byte state = LOW;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(interruptPin, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
}

void loop() {
    digitalWrite(ledPin, state);
}

void blink() {
    state = !state;
}
