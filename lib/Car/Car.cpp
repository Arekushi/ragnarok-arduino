#include <Arduino.h>
#include <Car.h>
#include <Ultra.h>
#include <StateMachine.h>

Car::Car(State<Car> *states[]) {
    setupInfraReds();
    setupEngines();

    memcpy(this->states, states, 10);

    ultra = new Ultra(ultra_port1, ultra_port2);
    machine = new StateMachine<Car>(*this, this->states[0]);
}

void Car::showSensors() {
    for(size_t i = 0; i < 3; i++) {
        infras[i]->show();
    }

    ultra->show();
}

//#region [Moviment Methods]
void Car::goBack(int8_t power) {
    left_engines[0]->write(power);
    left_engines[1]->write(LOW);

    right_engines[0]->write(power);
    right_engines[1]->write(LOW);
}

void Car::goForward(int8_t power) {
    left_engines[0]->write(LOW);
    left_engines[1]->write(power);

    right_engines[0]->write(LOW);
    right_engines[1]->write(power);
}

void Car::stop() {
    left_engines[0]->write(HIGH);
    left_engines[1]->write(HIGH);

    right_engines[0]->write(HIGH);
    right_engines[1]->write(HIGH);
}
//#endregion
