#include <CurvedFrontRight.h>
#include <Arduino.h>
#include <Car.h>

#include <Walk.h>
#include <AligningRight.h>
#include <TimeToCurvedFront.h>

void CurvedFrontRight::enter(Car data) {
    if(!isSetup) setup();

    Singleton<TimeToCurvedFront>::getInstance()->start = millis();
    Serial.println(F("Entrando em CurvedFrontRight"));
}

void CurvedFrontRight::exit(Car data) {
    Serial.println(F("Saindo de CurvedFrontRight"));
}

void CurvedFrontRight::setActions() { 
    addAction(Singleton<Walk>::getInstance());
}

void CurvedFrontRight::setTransitions() {
    addTransition(new Transition<Car>(
        Singleton<TimeToCurvedFront>::getInstance(),
        Singleton<AligningRight>::getInstance(),
        nullptr));
}
