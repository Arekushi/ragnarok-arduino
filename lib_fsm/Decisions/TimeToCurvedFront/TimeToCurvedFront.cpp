#include <TimeToCurvedFront.h>
#include <Car.h>

bool TimeToCurvedFront::decision(Car data) {
    current = millis();
    return (current - start > DELAY_FRONT_CURVE);
}
