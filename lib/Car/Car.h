#ifndef Car_h
#define Car_h

#include <Arduino.h>
#include <StateMachine.h>
#include <Ultrasonic.h>
#include <InfraRed.h>
#include <Engine.h>
#include <CarConfigs.h>

using namespace PortConfigs;
using namespace OtherConfigs;
using namespace AbstractFiniteStateMachine;

class Car {
    
    public:
        Ultrasonic *ultrasonic;
        InfraRed *infras[3];
        Engine *left_engines[2];
        Engine *right_engines[2];
        StateMachine<Car> *machine;

        Car(State<Car> *state);
        void showInfraReds();

        void goForward(byte POWER);
        void goBack(byte POWER);
        void lefting(byte POWER);
        void righting(byte POWER);
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

        void setupUltrasonic() {
            ultrasonic = new Ultrasonic(ultra_ports[0], ultra_ports[1]);
        }
};

#endif
