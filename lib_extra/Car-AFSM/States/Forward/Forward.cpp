#include <Forward.h>
#include <Arduino.h>
#include <Car.h>

#include <Walk.h>
#include <TurningLeft.h>
#include <LeftCurve.h>

void Forward::enter(Car data) {
    addAction(Singleton<Walk>::getInstance());

    addTransition(
        new Transition<Car>(new LeftCurve, 
        Singleton<TurningLeft>::getInstance(),
        Singleton<Forward>::getInstance()));

    Serial.println(F("Entrando em Forward"));
}

void Forward::exit(Car data) {
    Serial.println(F("Saindo de Forward"));
}
