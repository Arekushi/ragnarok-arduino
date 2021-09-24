#ifndef Engine_h
#define Engine_h

#include <Arduino.h>
#include <EngineConfigs.h>

using namespace EngineConfigs;

class Engine {
    
    private:
        const byte *port;
        byte pwm;

    public:
        Engine(const byte *port, byte pwm);
        void setup();
        void forward();
        void backward();
        void stop();
        void changePotency(byte power);
};

#endif
