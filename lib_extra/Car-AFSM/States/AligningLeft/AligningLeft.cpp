#include <AligningLeft.h>
#include <Arduino.h>
#include <Car.h>

#include <Forward.h>
#include <Lefting.h>
#include <ReadInfra.h>
#include <CenterSensorActivated.h>

void AligningLeft::enter(Car data) {
    base::enter(data);
}

void AligningLeft::exit(Car data) {
    base::exit(data);
}

void AligningLeft::setActions() {
    addAction(Singleton<Lefting>::getInstance());
    addAction(Singleton<ReadInfra>::getInstance());
}

void AligningLeft::setTransitions() {
    addTransition(new Transition<Car>(
        Singleton<CenterSensorActivated>::getInstance(), 
        Singleton<Forward>::getInstance(),
        nullptr));
}
