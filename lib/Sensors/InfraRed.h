#ifndef InfraRed_h
#define InfraRed_h

#include <Arduino.h>

class InfraRed {
    
    float port;
    float value;

    public:
        InfraRed(float port);
        void setup();
        float read();
};

#endif
