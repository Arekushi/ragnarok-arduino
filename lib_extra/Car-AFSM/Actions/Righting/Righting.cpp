#include <Righting.h>
#include <Arduino.h>
#include <Car.h>

void Righting::execute(Car data) {
    data.righting(spin_speed);
    //Serial.println(F("Righting"));
}