#include <InfraRed.h>
#include <Arduino.h>

InfraRed::InfraRed(const char *name, byte port) {
    this->name = name;
    this->port = port;

    setup();
}

void InfraRed::setup() {
    pinMode(port, INPUT);
}

void InfraRed::read() {
    digitalValue = digitalRead(port);
}

bool InfraRed::getDigitalValue() {
    return digitalValue;
}

void InfraRed::show() {
    Serial.print(name);
    // Serial.print(F(" : "));
    // Serial.print(analogValue);
    Serial.print(F(" |  D: "));
    Serial.println(digitalValue);
}
