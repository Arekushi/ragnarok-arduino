#include <Car.h>
#include <Arduino.h>

Car::Car(State<Car> *initState) {
    initInfraReds();
    initEngines();
    initUltrasonic();

    machine = new StateMachine<Car>(*this, initState);
}

Car::Car(InputHandler<Car> *input, GenericCharacteristicCallbacks<Car> *callbacks) {
    initInfraReds();
    initEngines();
    initUltrasonic();

    bluetooth = new Bluetooth<Car>(*this, input, callbacks);
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
    for(byte i = 0; i < 2; i++) {
        m_engines[i] = new Engine(ENGINES_PORTS[i], PWM_CHANNELS[i]);
    }
}

void Car::initInfraReds() {
    for(byte i = 0; i < 3; i++) {
        m_infras[i] = new InfraRed(INFRA_NAMES[i], INFRAS_PORTS[i]);
    }
}

void Car::initUltrasonic() {
    ultrasonic = new Ultrasonic(ULTRA_PORTS[0], ULTRA_PORTS[1]);
}

InfraRed *Car::infras(InfraRedName name) {
    return m_infras[(int) name];
}

Engine *Car::engines(EngineName name) {
    return m_engines[(int) name];
}

InfraRed **Car::infras() {
    return m_infras;
}

Engine **Car::engines() {
    return m_engines;
}
