#include "pinAssignments.h"
#include <Arduino.h>
#include <Servo.h>

Servo servo;
void setup() {
    // put your setup code here, to run once:
    Serial.begin(115200);
    servo.attach(servoPin);
}

void loop() {
    // put your main code h`ere, to run repeatedly:
    Serial.println("20");
    servo.write(20);
    delay(1000);
    Serial.println("120");
    servo.write(120);
    delay(1000);
}
