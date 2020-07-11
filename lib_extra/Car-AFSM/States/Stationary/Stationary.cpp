#include <Stationary.h>
#include <Arduino.h>
#include <Car.h>

#include <Forward.h>

void Stationary::enter(Car data) {
    if(!isSetup) setup();

    Serial.println(F("Entrando em Stationary"));
}

void Stationary::exit(Car data) {
    Serial.println(F("Saindo de Stationary"));
}

void Stationary::setActions() {
}

void Stationary::setTransitions() {
}
