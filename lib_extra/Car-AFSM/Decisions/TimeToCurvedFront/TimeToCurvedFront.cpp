#include <TimeToCurvedFront.h>
#include <Car.h>

bool TimeToCurvedFront::decision(Car data) {
    current = millis();
    return (current - start > delay_front_curve);
}