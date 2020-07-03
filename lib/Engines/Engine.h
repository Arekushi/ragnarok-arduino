#ifndef Engine_h
#define Engine_h

#include <Arduino.h>

class Engine {
    
    private:
        int8_t port;

    public:
        Engine(int8_t port);
        void setup();
        void write(int8_t power);
};

#endif
