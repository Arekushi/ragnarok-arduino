#include <Car.h>
#include <CarConfigs.h>
#include <Arduino.h>
#include <StateMachine.h>
#include <State.h>
#include <Ultra.h>

Car::Car(State<Car> *startState) {
    setupInfraReds();
    setupEngines();
    setupUltra();

    machine = new StateMachine<Car>(*this, startState);
}

void Car::showSensors() {
    for(byte i = 0; i < 3; i++) {
        infras[i]->show();
    }

    //ultra->show();
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
