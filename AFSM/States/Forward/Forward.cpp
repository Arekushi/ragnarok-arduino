#include <Forward.h>
#include <Arduino.h>
#include <Car.h>

Forward::Forward() {
}

void Forward::enter(Car data) {
    Serial.println(F("Entrando em Forward"));
}

void Forward::exit(Car data) {
    Serial.println(F("Saindo de Forward"));
}
