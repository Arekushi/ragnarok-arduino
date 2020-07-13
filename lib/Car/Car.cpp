#include <Car.h>
#include <Arduino.h>

Car::Car() {
    for(byte i = 0; i < 3; i++) {
        infras[i] = new InfraRed(infras_names[i], infras_ports[i]);
    }

    for(byte i = 0; i < 2; i++) {
        left_engines[i] = new Engine(left_engines_ports[i]);
        right_engines[i] = new Engine(right_engines_ports[i]);
    }

    ultrasonic = new Ultrasonic(ultra_ports[0], ultra_ports[1]);
    machine = new StateMachine<Car>(*this);
}

void Car::goForward(byte POWER) {
    left_engines[0]->write(LOW);
    left_engines[1]->write(POWER);

    right_engines[0]->write(LOW);
    right_engines[1]->write(POWER);
}

void Car::goBack(byte POWER) {
    left_engines[0]->write(POWER);
    left_engines[1]->write(LOW);

    right_engines[0]->write(POWER);
    right_engines[1]->write(LOW);
}

void Car::lefting(byte POWER) {
    left_engines[0]->write(LOW);
    left_engines[1]->write(POWER);

    right_engines[0]->write(POWER);
    right_engines[1]->write(LOW);
}

void Car::righting(byte POWER) {
    left_engines[0]->write(POWER);
    left_engines[1]->write(LOW);

    right_engines[0]->write(LOW);
    right_engines[1]->write(POWER);
}

void Car::stop() {
    left_engines[0]->write(HIGH);
    left_engines[1]->write(HIGH);

    right_engines[0]->write(HIGH);
    right_engines[1]->write(HIGH);
}
