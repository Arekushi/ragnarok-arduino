#include <Arduino.h>
#include <Car.h>
#include <RXCallbacksCar.h>

#include <Forward.h>
#include <Backward.h>
#include <AligningLeft.h>
#include <AligningRight.h>
#include <CurvedFrontLeft.h>
#include <CurvedFrontRight.h>

Car *car;

void setupStates() {
    State<Car> *forward = Singleton<Forward>::getInstance();
    State<Car> *backward = Singleton<Backward>::getInstance();

    State<Car> *aligningLeft = Singleton<AligningLeft>::getInstance();
    State<Car> *aligningRight = Singleton<AligningRight>::getInstance();
    
    State<Car> *curvedFrontLeft = Singleton<CurvedFrontLeft>::getInstance();
    State<Car> *curvedFrontRight = Singleton<CurvedFrontRight>::getInstance();

    forward->opposite = backward;
    backward->opposite = forward;

    aligningLeft->opposite = aligningRight;
    aligningRight->opposite = aligningLeft;

    curvedFrontLeft->opposite = curvedFrontRight;
    curvedFrontRight->opposite = curvedFrontLeft;
}

void setup() {
    setupStates();
    Serial.begin(115200);

    car = new Car(Singleton<Forward>::getInstance());
    // car->startBluetooth(Singleton<RXCallbacksCar>::getInstance());
}

void loop() {
    car->machine->executeMachine();
}
