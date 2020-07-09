#ifndef InfraRed_h
#define InfraRed_h

#include <Arduino.h>

class InfraRed {
    
    private:
        byte port;

    public:
        String name;

        InfraRed(String name, byte port);
        float analog_float();
        bool digital_bool();
        void setup();
        void show();
};

#endif
