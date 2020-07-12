#include <Car.h>
#include <Arduino.h>
#include <StateMachine.h>
#include <State.h>

Car::Car(State<Car> *state) {
    setupInfraReds();
    setupEngines();

    ultrasonic = new Ultrasonic(ultra_ports[0], ultra_ports[1]);
    machine = new StateMachine<Car>(*this, state);
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
