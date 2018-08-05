/*
    Memory Measure

    Print amount of free memory on the serial monitor.

    This code was modified by Kollins Lima (August 05, 2018).

    The original code can be found on the book "Arduino Cookbook", First Edition, by Mychael Margolis.
*/

void setup() {
    Serial.begin(9600);
}

void loop() {
    int test[100], i;
  
    for(i = 0; i < 100; i++){
      test[i] = 1;
    }
    
    Serial.print(memoryFree());
    // print the free memory 
    Serial.print('\n');
    delayMicroseconds(100);
}

// variables created by the build process when compiling the sketch
extern int __bss_end;
extern void *__brkval;

// function to return the amount of free RAM
int memoryFree(){
    int freeValue;
    if((int)__brkval == 0){
      freeValue = ((int)&freeValue) - ((int)&__bss_end);
    }
    else{
      freeValue = ((int)&freeValue) - ((int)__brkval);
    }
    return freeValue;
}
