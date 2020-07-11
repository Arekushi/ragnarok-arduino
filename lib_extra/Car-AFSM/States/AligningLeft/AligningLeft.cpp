#include <AligningLeft.h>
#include <Arduino.h>
#include <Car.h>

#include <Forward.h>
#include <Lefting.h>
#include <ReadInfra.h>
#include <CenterSensorActivated.h>

void AligningLeft::enter(Car data) {
    if(!isSetup) setup();
    
    Serial.println(F("Entrando em AligningLeft"));
}

void AligningLeft::exit(Car data) {
    Serial.println(F("Saindo de AligningLeft"));
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
