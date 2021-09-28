#include <Stationary.h>
#include <Arduino.h>
#include <Car.h>

#include <Forward.h>
#include <Stop.h>

void Stationary::enter(Car data) {
}

void Stationary::exit(Car data) {
}

void Stationary::setActions() {
    addAction(Singleton<Stop>::getInstance());
}

void Stationary::setTransitions() { }
