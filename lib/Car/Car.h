#ifndef Car_h
#define Car_h

#include <Arduino.h>
#include <Ultra.h>
#include <StateMachine.h>
#include <InfraRed.h>
#include <Engine.h>

#define ultra_port1 7
#define ultra_port2 6

const String infras_names[] = { "Left", "Center", "Right" };
const int8_t infras_ports[] = { A0, A1, A2 };

const int8_t left_engines_ports[] = { 11, 10 };
const int8_t right_engines_ports[] = { 5, 9 };

class Car {

    public:
        InfraRed *infras[3];
        Engine *left_engines[2];
        Engine *right_engines[2];
        State<Car> *states[10];
        Ultra *ultra;
        StateMachine<Car> *machine;

        Car(State<Car> *states[]);
        void showSensors();

        void goForward(int8_t power);
        void goBack(int8_t power);
        void stop();
    
    private:
        void setupInfraReds() {
            for(size_t i = 0; i < 3; i++) {
                infras[i] = new InfraRed(infras_names[i], infras_ports[i]);
            }
        }

        void setupEngines() {
            for(size_t i = 0; i < 2; i++) {
                left_engines[i] = new Engine(left_engines_ports[i]);
                right_engines[i] = new Engine(right_engines_ports[i]);
            }
        }
};

#endif
