#include <Forward.h>
#include <Arduino.h>
#include <Car.h>

#include <Stationary.h>
#include <Walk.h>

void Forward::enter(Car data) {    
    base::enter(data);
}

void Forward::exit(Car data) { }

void Forward::setActions() {
    addAction(Singleton<Walk>::getInstance());
}

void Forward::setTransitions() { }
