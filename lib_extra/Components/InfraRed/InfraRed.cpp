#include <InfraRed.h>
#include <Arduino.h>

InfraRed::InfraRed(String name, byte port) {
    this->name = name;
    this->port = port;

    setup();
}

float InfraRed::analog_float() {
    return analogRead(port);
}

bool InfraRed::digital_bool() {
    return digitalRead(port);
}

void InfraRed::setup() {
    pinMode(port, INPUT);
}

void InfraRed::show() {
    Serial.print(name+ F(": "));
    Serial.println(digital_bool());
}
