#include <AligningRight.h>
#include <Arduino.h>
#include <Car.h>

#include <Forward.h>
#include <Righting.h>
#include <ReadInfra.h>
#include <CenterSensorActivated.h>
#include <LeftSensorActivated.h>

void AligningRight::enter(Car data) {
    data.changePotency(255, 255);
}

void AligningRight::exit(Car data) {
    data.changePotency(200, 200);
}

void AligningRight::setActions() {
    addAction(Singleton<Righting>::getInstance());
    addAction(Singleton<ReadInfra>::getInstance());
}

void AligningRight::setTransitions() {
    addTransition(new Transition<Car>(
        Singleton<CenterSensorActivated>::getInstance(), 
        Singleton<Forward>::getInstance(),
        nullptr
    ));

    /*addTransition(new Transition<Car>(
        Singleton<LeftSensorActivated>::getInstance(), 
        Singleton<Forward>::getInstance(),
        nullptr
    ));*/
}
