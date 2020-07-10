#include <AligningRight.h>
#include <Arduino.h>
#include <Car.h>

#include <Righting.h>
#include <ReadInfra.h>
#include <Forward.h>
#include <CenterSensorActivated.h>

AligningRight::AligningRight() {
    setup();
}

void AligningRight::enter(Car data) {
    Serial.println(F("Entrando em AligningRight"));
}

void AligningRight::exit(Car data) {
    Serial.println(F("Saindo de AligningRight"));
}

void AligningRight::setup() {
    addAction(Singleton<Righting>::getInstance());
    addAction(Singleton<ReadInfra>::getInstance());

    /*addTransition(new Transition<Car>(
        Singleton<CenterSensorActivated>::getInstance(), 
        Singleton<Forward>::getInstance(),
        nullptr));*/
}
