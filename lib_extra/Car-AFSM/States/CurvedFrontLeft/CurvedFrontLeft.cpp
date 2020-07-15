#include <CurvedFrontLeft.h>
#include <Arduino.h>
#include <Car.h>

#include <Walk.h>
#include <AligningLeft.h>
#include <TimeToCurvedFront.h>

void CurvedFrontLeft::enter(Car data) {
    base::enter(data);
    
    Singleton<TimeToCurvedFront>::getInstance()->start = millis();
}

void CurvedFrontLeft::exit(Car data) {
    base::exit(data);
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
