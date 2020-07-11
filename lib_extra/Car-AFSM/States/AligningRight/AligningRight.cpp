#include <AligningRight.h>
#include <Arduino.h>
#include <Car.h>

#include <Forward.h>
#include <Righting.h>
#include <ReadInfra.h>
#include <CenterSensorActivated.h>

void AligningRight::enter(Car data) {
    if(!isSetup) setup();
    
    Serial.println(F("Entrando em AligningRight"));
}

void AligningRight::exit(Car data) {
    Serial.println(F("Saindo de AligningRight"));
}

void AligningRight::setActions() {
    addAction(Singleton<Righting>::getInstance());
    addAction(Singleton<ReadInfra>::getInstance());
}

void AligningRight::setTransitions() {
    addTransition(new Transition<Car>(
        Singleton<CenterSensorActivated>::getInstance(), 
        Singleton<Forward>::getInstance(),
        nullptr));
}
