#ifndef Car_h
#define Car_h

#include <Arduino.h>
#include <StateMachine.h>
#include <Ultra.h>
#include <InfraRed.h>
#include <Engine.h>

using namespace AbstractFiniteStateMachine;

const byte ultra_port1 = 7;
const byte ultra_port2 = 6;

const String infras_names[] = { "Left", "Center", "Right" };
const byte infras_ports[] = { A0, A1, A2 };

const byte left_engines_ports[] = { 11, 10 };
const byte right_engines_ports[] = { 5, 9 };

class Car {

    public:
        Ultra *ultra;
        InfraRed *infras[3];
        Engine *left_engines[2];
        Engine *right_engines[2];
        StateMachine<Car> *machine;

        Car(State<Car> *startState);
        void showSensors();

        void goForward(byte POWER);
        void goBack(byte POWER);
        void stop();
    
    private:
        void setupInfraReds() {
            for(byte i = 0; i < 3; i++) {
                infras[i] = new InfraRed(infras_names[i], infras_ports[i]);
            }
        }

        void setupEngines() {
            for(byte i = 0; i < 2; i++) {
                left_engines[i] = new Engine(left_engines_ports[i]);
                right_engines[i] = new Engine(right_engines_ports[i]);
            }
        }
};

#endif
