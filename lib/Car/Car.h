#ifndef Car_h
#define Car_h

#include <Arduino.h>
#include <StateMachine.h>
#include <Ultra.h>
#include <InfraRed.h>
#include <Engine.h>
#include <CarConfigs.h>

using namespace PortConfigs;
using namespace OtherConfigs;
using namespace AbstractFiniteStateMachine;

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

        void lefting(byte POWER);
        void righting(byte POWER);

        void virandoEsquerda(byte POWER);
        void virandoDireita(byte POWER);
    
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

        void setupUltra() {
            ultra = new Ultra(ultra_ports[0], ultra_ports[1]);
        }
};

#endif
