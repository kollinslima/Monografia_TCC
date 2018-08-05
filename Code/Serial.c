/*
    Serial

    Prints on the serial monitor whatever it receives as input.

    This code was modified by Kollins Lima (August 05, 2018).

    The original code is available at:
    https://www.arduino.cc/en/Serial/Read
*/

int incomingByte = 0;     // for incoming serial data

void setup() {
    Serial.begin(9600);  // opens serial port, sets data rate to 9600 bps
}

void loop() {
    // send data only when you receive data:
    if (Serial.available() > 0) {
        // read the incoming byte:
        incomingByte = Serial.read();

        // say what you got:              
        Serial.write(incomingByte);              
    }
}
