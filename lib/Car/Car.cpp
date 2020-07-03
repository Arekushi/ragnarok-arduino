#include <Arduino.h>
#include <Car.h>

#include <Ultra.h>
#include <StateMachine.h>

/* Region Define */
#define ultra_port1 7
#define ultra_port2 6

const String infra_names[] = { "Left", "Center", "Right" };
const int8_t infra_ports[] = { A0, A1, A2 };

const int8_t left_engine_ports[] = { 11, 10 };
const int8_t right_engine_ports[] = { 5, 9 };

/* Methods */
Car::Car(State<Car> *state) {
    ultra = new Ultra(ultra_port1, ultra_port2);
    machine = new StateMachine<Car>(*this, state);

    for(size_t i = 0; i < infra_names->length() - 1; i++) {
        infras[i] = new InfraRed(infra_names[i], infra_ports[i]);
    }

    for(size_t i = 0; i < 2; i++) {
        left_engine[i] = new Engine(left_engine_ports[i]);
        right_engine[i] = new Engine(right_engine_ports[i]);
    }
}

void Car::goBack() {
    left_engine[0]->write(35);
    left_engine[1]->write(0);

    right_engine[0]->write(35);
    right_engine[1]->write(35);
}

void Car::goForward() {
    left_engine[0]->write(0);
    left_engine[1]->write(35);

    right_engine[0]->write(0);
    right_engine[1]->write(35);
}

void Car::stop() {
    left_engine[0]->write(35);
    left_engine[1]->write(35);

    right_engine[0]->write(35);
    right_engine[1]->write(35);
}

void Car::showSensors() {
    for(size_t i = 0; i < infra_names->length() - 1; i++) {
        infras[i]->show();
    }

    ultra->show();
}
