#include <Arduino.h>
#include <Car.h>

#include <Ultra.h>
#include <StateMachine.h>

Car::Car(int a, int b, State<Car> *state) {
    this->ultra = new Ultra(a, b);
    this->machine = new StateMachine<Car>(*this, state);
}

void Car::goBack() {
    Serial.println("Back");
}

void Car::goForward() {
    Serial.println("Forward");
}

void Car::stop() {
    Serial.println("Stop");
}
