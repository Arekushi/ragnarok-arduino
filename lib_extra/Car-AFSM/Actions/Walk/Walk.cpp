#include <Walk.h>
#include <Arduino.h>
#include <Car.h>

void Walk::execute(Car data) {
    data.goForward(normal_speed);
    //Serial.println(F("Walking"));
    //data.showSensors();
    //delay(1000);
}