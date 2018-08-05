/*
    Input to Output

    Read signal from input and send it to output

    This code was developed by Kollins Lima (August 05, 2018).
*/

int input_pin = 8;
int output_pin = 9;
int val = 0;

void setup() {
    pinMode(output_pin, OUTPUT);
    pinMode(input_pin, INPUT);
}

void loop() {  
    val = digitalRead(input_pin);     
    digitalWrite(output_pin, val);
}
