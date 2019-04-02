

int led1 = D0;
int led2 = D1;
int led3 = D2;



void setup()
{

   // pin configuration
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   
   //declare function    
   Particle.function("led",ledToggle);


   // All Leds off
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
   
}


void loop()
{
   // Nothing
}

int ledToggle(String command) {


    if (command=="red") {
        digitalWrite(led1,  !digitalRead(led1));
        return 0;
    }
    if (command=="green") {
        digitalWrite(led2,  !digitalRead(led2));
        return 1;
    }
    if (command=="blue") {
        digitalWrite(led3,  !digitalRead(led3));
        return 2;
    }
    else {
        return -1;
    }
}

