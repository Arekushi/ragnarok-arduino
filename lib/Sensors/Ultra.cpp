#include <Arduino.h>
#include <Ultra.h>
#include <Ultrasonic.h>

Ultra::Ultra(int port1, int port2) {
    this->ultrasonic = new Ultrasonic(port1, port2);
}

float Ultra::readDistance() {
    return ultrasonic->read();
}

void Ultra::showDistance() {
    Serial.print("Distância: ");
    Serial.print(readDistance());
    Serial.println(" cm.");
}