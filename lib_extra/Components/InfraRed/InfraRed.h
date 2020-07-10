#ifndef InfraRed_h
#define InfraRed_h

#include <Arduino.h>

class InfraRed {
    
    private:
        byte port;
        bool value;

    public:
        String name;

        InfraRed(String name, byte port);
        bool getValue();
        void read();
        void setup();
        void show();
};

#endif
