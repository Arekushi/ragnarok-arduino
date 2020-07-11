#include <CurvedFrontLeft.h>
#include <Arduino.h>
#include <Car.h>

#include <Walk.h>
#include <AligningLeft.h>
#include <TimeToCurvedFront.h>

void CurvedFrontLeft::enter(Car data) {
    if(!isSetup) setup();

    Singleton<TimeToCurvedFront>::getInstance()->start = millis();
    Serial.println(F("Entrando em CurvedFrontLeft"));
}

void CurvedFrontLeft::exit(Car data) {
    Serial.println(F("Saindo de CurvedFrontLeft"));
}

void CurvedFrontLeft::setActions() {
    addAction(Singleton<Walk>::getInstance());
}

void CurvedFrontLeft::setTransitions() {
    addTransition(new Transition<Car>(
        Singleton<TimeToCurvedFront>::getInstance(),
        Singleton<AligningLeft>::getInstance(),
        nullptr));
}
