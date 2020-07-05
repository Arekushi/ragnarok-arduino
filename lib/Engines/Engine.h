#ifndef Engine_h
#define Engine_h

#include <Arduino.h>

class Engine {
    
    private:
        byte port;

    public:
        Engine(byte port);
        void setup();
        void write(byte power);
};

#endif
