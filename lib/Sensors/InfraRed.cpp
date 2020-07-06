#include <InfraRed.h>
#include <Arduino.h>

InfraRed::InfraRed(String name, byte port) {
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
    Serial.print(name+ F(": "));
    Serial.println(read());
}
