#include <avr/sleep.h>

const int relayPin = 2;
const int delayTime = 500;  //0,5sec

void setup(){
    delay(1000);
    pinMode(relayPin, OUTPUT);
    digitalWrite(relayPin, HIGH);
    doubleToggle(relayPin,delayTime);

    set_sleep_mode(SLEEP_MODE_PWR_DOWN); // choose power down mode
    sleep_mode(); // sleep now!
}

void loop(){
}

void doubleToggle(int Pin, int delayTime){
    digitalWrite(Pin, LOW);
    delay(delayTime);
    digitalWrite(Pin, HIGH);
}