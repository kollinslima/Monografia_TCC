/*
    Analog Input

    Read an analog value and display the result on PORTD (pin 0 - pin 7)

    This code was developed by Kollins Lima (August 05, 2018).
*/

int sensorPin = A0;    
int sensorValue = 0;  

void setup() {
    DDRD = 0xFF;  
}

void loop() {
    sensorValue = analogRead(sensorPin);  
    PORTD = sensorValue;
}
