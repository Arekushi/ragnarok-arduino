#include <Ultra.h>
#include <Arduino.h>
#include <Ultrasonic.h>

Ultra::Ultra(byte port1, byte port2) {
    this->ultrasonic = new Ultrasonic(port1, port2);
}

float Ultra::read() {
    return ultrasonic->read();
}

void Ultra::show() {
    Serial.print(F("Distância: "));
    Serial.print(read());
    Serial.println(F(" cm."));
}
