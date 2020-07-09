#include <Run.h>
#include <Arduino.h>
#include <Car.h>

void Run::execute(Car data) {
    Serial.println(F("Estou em Forward"));
    //data.goForward(normal_speed);
}