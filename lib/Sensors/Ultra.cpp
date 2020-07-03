#include <Arduino.h>
#include <Ultra.h>
#include <Ultrasonic.h>

Ultra::Ultra(int8_t port1, int8_t port2) {
    this->ultrasonic = new Ultrasonic(port1, port2);
}

float Ultra::read() {
    return ultrasonic->read();
}

void Ultra::show() {
    Serial.print("Distância: ");
    Serial.print(read());
    Serial.println(" cm.");
}
