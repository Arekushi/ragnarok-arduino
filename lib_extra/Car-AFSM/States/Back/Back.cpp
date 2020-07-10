#include <Back.h>
#include <Arduino.h>
#include <Car.h>

Back::Back() {
    setup();
}

void Back::enter(Car data) {
    Serial.println(F("Entrando em Back"));
}

void Back::exit(Car data) {
    Serial.println(F("Saindo de Back"));
}

void Back::setup() {
    
}
