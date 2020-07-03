#include <Arduino.h>
#include <InfraRed.h>

InfraRed::InfraRed(String name, float port) {
    this->name = name;
    this->port = port;

    setup();
}

float InfraRed::read() {
    return analogRead(this->port);
}

void InfraRed::setup() {
    pinMode(this->port, INPUT);
}

void InfraRed::show() {
    Serial.print(name+": ");
    Serial.println(read());
}
