#include <Stationary.h>
#include <Arduino.h>
#include <Car.h>

#include <Forward.h>

void Stationary::enter(Car data) {
    base::enter(data);
}

void Stationary::exit(Car data) {
    base::exit(data);
}

void Stationary::setActions() {
}

void Stationary::setTransitions() {
}
