#include <Back.h>
#include <Arduino.h>
#include <Car.h>

void Back::enter(Car data) {
    if(!isSetup) setup();

    Serial.println(F("Entrando em Back"));
}

void Back::exit(Car data) {
    Serial.println(F("Saindo de Back"));
}

void Back::setActions() { 
}

void Back::setTransitions() {
}
