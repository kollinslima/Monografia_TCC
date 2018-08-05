/*
    Analog Serial

    Print the decimal value of the analog conversion on serial monitor

    This code was modified by Kollins Lima (August 05, 2018).

    The original code is available at:
    http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  analogReference(EXTERNAL);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delayMicroseconds(10);       
}
