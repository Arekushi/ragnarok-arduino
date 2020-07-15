#include <UltrasonicSawObstacle.h>
#include <Car.h>

bool UltrasonicSawObstacle::decision(Car data) {
    return data.ultrasonic->read() <= 5;
}