#include <Back.h>
#include <Arduino.h>
#include <Car.h>

void Back::execute(Car data) {
    data.goBack();
}
