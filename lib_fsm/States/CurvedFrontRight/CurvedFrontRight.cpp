#include <CurvedFrontRight.h>
#include <Arduino.h>
#include <Car.h>

#include <Walk.h>
#include <AligningRight.h>
#include <TimeToCurvedFront.h>

void CurvedFrontRight::enter(Car data) {
    Singleton<TimeToCurvedFront>::getInstance()->start = millis();
}

void CurvedFrontRight::exit(Car data) {
}

void CurvedFrontRight::setActions() { 
    addAction(Singleton<Walk>::getInstance());
}

void CurvedFrontRight::setTransitions() {
    addTransition(new Transition<Car>(
        Singleton<TimeToCurvedFront>::getInstance(),
        Singleton<AligningRight>::getInstance(),
        nullptr
    ));
}
