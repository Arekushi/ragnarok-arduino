#include <Backward.h>
#include <Arduino.h>
#include <Car.h>

#include <Back.h>

void Backward::enter(Car data) {
    base::enter(data);
}

void Backward::exit(Car data) {
}

void Backward::setActions() {
    addAction(Singleton<Back>::getInstance());
}

void Backward::setTransitions() {
}
