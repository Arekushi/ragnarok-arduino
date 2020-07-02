#include <Arduino.h>
#include <Ultrasonic.h>

#pragma region Variables

Ultrasonic ultrasonic(7, 6);
long microsec = 0;
float distanceCM = 0;

#pragma endregion

#pragma region Methods

void readDistance() {
    distanceCM = ultrasonic.read();
}

void setup() {
    Serial.begin(9600);
}

void loop() {
    readDistance();

    Serial.println(distanceCM);
}
