#ifndef Car_h
#define Car_h

#include <Arduino.h>
#include <CarConfigs.h>
#include <Engine.h>
#include <InfraRed.h>
#include <Ultrasonic.h>
#include <StateMachine.h>
#include <State.h>
#include <InfraRedName.h>
#include <EngineName.h>
#include <Bluetooth.h>

using namespace PortConfigs;
using namespace OtherConfigs;

class Car {
    
    public:
        Ultrasonic *ultrasonic;
        StateMachine<Car> *machine;
        Bluetooth<Car> *bluetooth;

        Car(State<Car> *initState);
        
        void goForward();
        void goBack();
        void lefting();
        void righting();
        void stop();

        void changePotency(byte powerLeft, byte powerRight);
        void startBluetooth(RXCallbacks<Car> *rxCallbacks);

        InfraRed **infras();
        Engine **engines();

        InfraRed *infras(InfraRedName name);
        Engine *engines(EngineName name);
    
    private:
        InfraRed *m_infras[3];
        Engine *m_engines[2];

        void initInfraReds();
        void initEngines();
        void initUltrasonic();
};

#endif
