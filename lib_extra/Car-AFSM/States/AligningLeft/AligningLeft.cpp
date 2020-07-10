#include <AligningLeft.h>
#include <Arduino.h>
#include <Car.h>

#include <Lefting.h>
#include <ReadInfra.h>
#include <Forward.h>
#include <CenterSensorActivated.h>

AligningLeft::AligningLeft() {
    setup();
}

void AligningLeft::enter(Car data) {
    Serial.println(F("Entrando em AligningLeft"));
}

void AligningLeft::exit(Car data) {
    Serial.println(F("Saindo de AligningLeft"));
}

void AligningLeft::setup() {
    addAction(Singleton<Lefting>::getInstance());
    addAction(Singleton<ReadInfra>::getInstance());

    /*addTransition(new Transition<Car>(
        Singleton<CenterSensorActivated>::getInstance(), 
        Singleton<Forward>::getInstance(),
        nullptr));*/
}
