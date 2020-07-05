#include <Car.h>
#include <Arduino.h>
#include <Ultra.h>
#include <StateMachine.h>
#include <State.h>

Car::Car(State<Car> *startState) {
    setupInfraReds();
    setupEngines();

    ultra = new Ultra(ultra_port1, ultra_port2);
    machine = new StateMachine<Car>(*this, startState);
}

void Car::showSensors() {
    for(byte i = 0; i < 3; i++) {
        infras[i]->show();
    }

    ultra->show();
}

//#region [Moviment Methods]
void Car::goBack(byte POWER) {
    left_engines[0]->write(POWER);
    left_engines[1]->write(LOW);

    right_engines[0]->write(POWER);
    right_engines[1]->write(LOW);
}

void Car::goForward(byte POWER) {
    left_engines[0]->write(LOW);
    left_engines[1]->write(POWER);

    right_engines[0]->write(LOW);
    right_engines[1]->write(POWER);
}

void Car::stop() {
    left_engines[0]->write(HIGH);
    left_engines[1]->write(HIGH);

    right_engines[0]->write(HIGH);
    right_engines[1]->write(HIGH);
}
//#endregion
