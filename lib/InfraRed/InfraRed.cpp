#include <InfraRed.h>
#include <Arduino.h>

InfraRed::InfraRed(const char *name, byte port, unsigned short int comparer) {
    this->name = name;
    this->port = port;
    this->comparer = comparer;

    setup();
}

void InfraRed::read() {
    digitalValue = digitalRead(port);
    // analogValue = analogRead(port);
}

bool InfraRed::getAnalogValue() {
    // return analogValue >= comparer;
    return true;
}

bool InfraRed::getDigitalValue() {
    return digitalValue;
}

void InfraRed::setup() {
    pinMode(port, INPUT);
}

void InfraRed::show() {
    Serial.print(name);
    Serial.print(F(" : "));
    // Serial.print(analogValue);
    Serial.print(F(" |  D: "));
    Serial.println(digitalValue);
    
}
