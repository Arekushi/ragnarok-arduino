#include <Forward.h>
#include <Arduino.h>
#include <Car.h>

#include <Walk.h>
#include <ReadInfra.h>
#include <AligningLeft.h>
#include <AligningRight.h>
#include <LeftSensorActivated.h>
#include <RightSensorActivated.h>
#include <LeftCenterSensorsActivated.h>
#include <RightCenterSensorsActivated.h>

Forward::Forward() {
    setup();
}

void Forward::enter(Car data) {
    Serial.println(F("Entrando em Forward"));
}

void Forward::exit(Car data) {
    data.stop();
    delay(500);

    Serial.println(F("Saindo de Forward"));
}

void Forward::setup() {
    addAction(Singleton<Walk>::getInstance());
    addAction(Singleton<ReadInfra>::getInstance());

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
        Singleton<AligningLeft>::getInstance(),
        nullptr));

    addTransition(new Transition<Car>(
        Singleton<RightCenterSensorsActivated>::getInstance(),
        Singleton<AligningRight>::getInstance(),
        nullptr));
}
