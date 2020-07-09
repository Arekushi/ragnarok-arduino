#include <TurningRight.h>
#include <Arduino.h>
#include <Car.h>

void TurningRight::enter(Car data) {
    Serial.println(F("Entrando em TurningRight"));
}

void TurningRight::exit(Car data) {
    Serial.println(F("Saindo de TurningRight"));
}
