#include <Back.h>
#include <Car.h>
#include <Arduino.h>

Back::Back() {
}

void Back::enter(Car data) {
    Serial.println(F("Entrando em Back"));
}

void Back::exit(Car data) {
    Serial.println(F("Saindo de Back"));
}