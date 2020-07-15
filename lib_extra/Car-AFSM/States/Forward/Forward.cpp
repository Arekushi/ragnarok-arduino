#include <Forward.h>
#include <Arduino.h>
#include <Car.h>

#include <AligningLeft.h>
#include <AligningRight.h>
#include <CurvedFrontLeft.h>
#include <CurvedFrontRight.h>
#include <Stationary.h>

#include <Back.h>
#include <Walk.h>
#include <ReadInfra.h>
#include <LeftSensorActivated.h>
#include <RightSensorActivated.h>
#include <LeftCenterSensorsActivated.h>
#include <RightCenterSensorsActivated.h>
#include <CenterSensorActivated.h>
#include <UltrasonicSawObstacle.h>

void Forward::enter(Car data) {    
    base::enter(data);
}

void Forward::exit(Car data) {
    data.stop();
    delay(250);

    base::exit(data);
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

    // [Ultrasonic]
    addTransition(new Transition<Car>(
        Singleton<UltrasonicSawObstacle>::getInstance(),
        Singleton<Stationary>::getInstance(),
        nullptr));
}
