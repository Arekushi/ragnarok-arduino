#include <Stationary.h>
#include <Arduino.h>
#include <Car.h>

#include <Forward.h>
#include <Stop.h>

void Stationary::enter(Car data) {
    base::enter(data);
}

void Stationary::exit(Car data) {
    base::exit(data);
}

void Stationary::setActions() {
    addAction(Singleton<Stop>::getInstance());
}

void Stationary::setTransitions() {
}
