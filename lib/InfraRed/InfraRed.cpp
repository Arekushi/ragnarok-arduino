#include <InfraRed.h>
#include <Arduino.h>

InfraRed::InfraRed(const char *name, byte port) {
    this->name = name;
    this->port = port;

    setup();
}

void InfraRed::read() {
    value = digitalRead(port);
}

bool InfraRed::getValue() {
    return value;
}

void InfraRed::setup() {
    pinMode(port, INPUT);
}

void InfraRed::show() {
    //Serial.print(name);
    //Serial.print(F(" : "));
    //Serial.println(value);
}
