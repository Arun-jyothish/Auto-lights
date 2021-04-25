

/// switch manual overide
/// double tap -- environment light caliberation

#define Bulb 10
#define LDR A0
#define Button 5

int previous_value = 500;
int incr_value = 300;
int dig_ldr;

void setup(){
pinMode(Bulb,OUTPUT);

}

void loop(){

int ldr_sense = analogRead(LDR);

if(pulseIn(Button,HIGH,10e6) > .5*10e5)

    threshold_value = ldr_sense;

if ( ldr_sense > previous_value + incr_value )
dig_ldr = HIGH;
else if(ldr_sense)
LOW;


if (dig_ldr ){
    bool previous = true;
    if (line_on)
    {

    }
    else{
    digitalWrite(Bulb,HIGH);
    }
}

previous_value = ldr_sense;

}
