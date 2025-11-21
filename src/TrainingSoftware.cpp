#include "TrainingSoftware.h"
#include <Arduino.h>
#include <servo.h>

void setup() {
    pinMode(33, OUTPUT);
    digitalWrite(33, HIGH); 

    pinMode(10, OUTPUT);
    analogWrite(10, 128); 

}

void loop() {
    digitalWrite(33, HIGH);
    delay(1000);
    digitalWrite(33, LOW);
    delay(1000);

    analogWrite(10, 0);
    delay(1000);
    analogWrite(10, 255);
    delay(1000);


}
