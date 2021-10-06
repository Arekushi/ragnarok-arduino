#include <AligningLeft.h>
#include <Arduino.h>
#include <Car.h>

#include <Forward.h>
#include <Lefting.h>
#include <ReadInfra.h>
#include <RightSensorActivated.h>
#include <CenterSensorActivated.h>

void AligningLeft::enter(Car data) {
    data.changePotency(255, 255);
}

void AligningLeft::exit(Car data) {
    data.changePotency(200, 200);
}

void AligningLeft::setActions() {
    addAction(Singleton<Lefting>::getInstance());
    addAction(Singleton<ReadInfra>::getInstance());
}

void AligningLeft::setTransitions() {
    addTransition(new Transition<Car>(
        Singleton<CenterSensorActivated>::getInstance(), 
        Singleton<Forward>::getInstance(),
        nullptr
    ));

    /*addTransition(new Transition<Car>(
        Singleton<RightSensorActivated>::getInstance(), 
        Singleton<Forward>::getInstance(),
        nullptr
    ));*/
}
