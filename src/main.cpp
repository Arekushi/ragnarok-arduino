#include <Arduino.h>
#include <Car.h>

#include <State.h>
#include <Forward.h>
#include <Back.h>

#include <Action.h>
#include <Run.h>
#include <Stop.h>

#include <Decision.h>
#include <CheckCurve.h>

#include <Transition.h>

State<Car> *forward = new Forward;
State<Car> *back = new Back;

//Action<Car> *run = new Run;
//Action<Car> *stop = new Stop;

//Decision<Car> *checkCurve = new CheckCurve;
//Transition<Car> *transition = new Transition<Car>(checkCurve, back, forward);

//Car car(forward);

void setup() {
    Serial.begin(9600);
}

void loop() {
    //car.machine->executeMachine();
}
