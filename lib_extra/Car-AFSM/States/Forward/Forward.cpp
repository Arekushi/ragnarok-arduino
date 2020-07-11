#include <Forward.h>
#include <Arduino.h>
#include <Car.h>

#include <AligningLeft.h>
#include <AligningRight.h>
#include <CurvedFrontLeft.h>
#include <CurvedFrontRight.h>

#include <Back.h>
#include <Walk.h>
#include <ReadInfra.h>
#include <LeftSensorActivated.h>
#include <RightSensorActivated.h>
#include <LeftCenterSensorsActivated.h>
#include <RightCenterSensorsActivated.h>
#include <CenterSensorActivated.h>

void Forward::enter(Car data) {    
    Serial.println(F("Entrando em Forward"));
}

void Forward::exit(Car data) {
    data.stop();
    delay(500);

    Serial.println(F("Saindo de Forward"));
}

void Forward::setActions() {
    addAction(Singleton<Walk>::getInstance());
    addAction(Singleton<ReadInfra>::getInstance());
}

void Forward::setTransitions() {
    // [Primario]
    addTransition(new Transition<Car>(
        Singleton<LeftSensorActivated>::getInstance(), 
        Singleton<AligningLeft>::getInstance(),
        nullptr));

    addTransition(new Transition<Car>(
        Singleton<RightSensorActivated>::getInstance(),
        Singleton<AligningRight>::getInstance(),
        nullptr));

    // [Secundario]
    addTransition(new Transition<Car>(
        Singleton<LeftCenterSensorsActivated>::getInstance(),
        Singleton<CurvedFrontLeft>::getInstance(),
        nullptr));

    addTransition(new Transition<Car>(
        Singleton<RightCenterSensorsActivated>::getInstance(),
        Singleton<CurvedFrontRight>::getInstance(),
        nullptr));
}
