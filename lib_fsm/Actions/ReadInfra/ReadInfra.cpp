#include <ReadInfra.h>
#include <Arduino.h>
#include <Car.h>

void ReadInfra::execute(Car data) {
    for(byte i = 0; i < 3; i++) {
        data.infras()[i]->read();
    }
}
