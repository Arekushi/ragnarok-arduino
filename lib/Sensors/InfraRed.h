#ifndef InfraRed_h
#define InfraRed_h

#include <Arduino.h>

class InfraRed {
    
    private:
        float port;

    public:
        String name;

        InfraRed(String name, float port);
        float read();
        void setup();
        void show();
};

#endif
