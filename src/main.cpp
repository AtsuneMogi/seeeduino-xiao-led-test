#include <Arduino.h>


int leds[] = {3, 4, 5}; // r, g, b


void setup() {
    for(int i = 0; i < 3; i++) {
        pinMode(leds[i], OUTPUT);
    }
}


void loop() { // LOW: led light
    digitalWrite(leds[0], LOW); // red
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], HIGH);
    delay(50);
    digitalWrite(leds[0], HIGH); // green
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], HIGH);
    delay(50);
    digitalWrite(leds[0], HIGH); // blue
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], LOW);
    delay(50);
    digitalWrite(leds[0], LOW); // yellow
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], HIGH);
    delay(50);
    digitalWrite(leds[0], LOW); // magenta
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], LOW);
    delay(50);
    digitalWrite(leds[0], LOW); // cyan
    digitalWrite(leds[1], HIGH);
    digitalWrite(leds[2], LOW);
    delay(50);
    digitalWrite(leds[0], LOW); // white
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], LOW);
    delay(50);
}
