#include <TurningLeft.h>
#include <Arduino.h>
#include <Car.h>

#include <Lefting.h>
#include <Forward.h>
#include <LeftCurve.h>

void TurningLeft::enter(Car data) {
    addAction(Singleton<Lefting>::getInstance());

    addTransition(
        new Transition<Car>(new LeftCurve, 
        Singleton<TurningLeft>::getInstance(),
        Singleton<Forward>::getInstance()));
        
    Serial.println(F("Entrando em TurningLeft"));
}

void TurningLeft::exit(Car data) {
    Serial.println(F("Saindo de TurningLeft"));
}
