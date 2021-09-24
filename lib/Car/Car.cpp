#include <Car.h>
#include <Arduino.h>

Car::Car(State<Car> *initState) {
    initInfraReds();
    initEngines();

    ultrasonic = new Ultrasonic(ultra_ports[0], ultra_ports[1]);
    machine = new StateMachine<Car>(*this, initState);
}

void Car::goForward() {
    engines(EngineName::LEFT)->forward();
    engines(EngineName::RIGHT)->forward();
}

void Car::goBack() {
    engines(EngineName::LEFT)->backward();
    engines(EngineName::RIGHT)->backward();
}

void Car::lefting() {
    engines(EngineName::LEFT)->backward();
    engines(EngineName::RIGHT)->forward();
}

void Car::righting() {
    engines(EngineName::LEFT)->forward();
    engines(EngineName::RIGHT)->backward();
}

void Car::stop() {
    engines(EngineName::LEFT)->stop();
    engines(EngineName::RIGHT)->stop();
}

void Car::changePotency(byte powerLeft, byte powerRight) {
    engines(EngineName::LEFT)->changePotency(powerLeft);
    engines(EngineName::RIGHT)->changePotency(powerRight);
}

void Car::initEngines() {
    // for(byte i = 0; i < 2; i++) {
    //     _engines[i] = new Engine(engines_ports[i], pwm_channels[i]);
    // }
}

void Car::initInfraReds() {
    for(byte i = 0; i < 3; i++) {
        _infras[i] = new InfraRed(infras_names[i], infras_ports[i]);
    }
}

InfraRed *Car::infras(InfraRedName name) {
    return _infras[(int) name];
}

Engine *Car::engines(EngineName name) {
    return _engines[(int) name];
}

InfraRed **Car::infras() {
    return _infras;
}

Engine **Car::engines() {
    return _engines;
}
