#include <Arduino.h>
#include <InfraRed.h>

InfraRed::InfraRed(float port) {
    this->port = port;
}

float InfraRed::read() {
    return analogRead(this->port);
}

void InfraRed::setup() {
    pinMode(this->port, INPUT);
}
