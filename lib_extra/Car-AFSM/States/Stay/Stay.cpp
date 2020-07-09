#include <Stay.h>
#include <Arduino.h>
#include <Car.h>

void Stay::enter(Car data) {
    Serial.println(F("Entrando em Forward"));
}

void Stay::exit(Car data) {
    Serial.println(F("Saindo de Forward"));
}
