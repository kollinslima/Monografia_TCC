/*
    Timer

    Uses interruption caused by timer overflow to blink led

    This code was developed by Kollins Lima (August 03, 2018).
*/
const int ledPin = 9;

void setup()
{
    pinMode(ledPin, OUTPUT);

    //Timer configuration
    /*
      - Normal mode
      - OC1A/OC1B disconnected
      - No prescaling
     */
    TCCR1A = 0x00;                        
    TCCR1B = 0x00;                        
    TCCR1B |= (1<<CS10);              

    //Initial counting value
    TCNT1 = 0x00FF;                    

    //Enable overflow interruption
    TIMSK1 |= (1 << TOIE1);    
}

void loop()
{}

ISR(TIMER1_OVF_vect)                              
{ 
    digitalWrite(ledPin, digitalRead(ledPin) ^ 1);                           
    TCNT1 = 0x00FF;                    
}
