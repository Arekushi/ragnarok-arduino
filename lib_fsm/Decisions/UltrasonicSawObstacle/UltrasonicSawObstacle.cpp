#include <UltrasonicSawObstacle.h>
#include <Car.h>

bool UltrasonicSawObstacle::decision(Car data) {
    bool value = data.ultrasonic->read() <= 5;

    data.ultrasonic->show();

    return value;
}
