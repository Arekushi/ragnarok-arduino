#ifndef InfraRed_h
#define InfraRed_h

#include <Arduino.h>

class InfraRed {
    
    private:
        byte port;
        bool digitalValue;
        float analogValue;

    public:
        const char *name;

        InfraRed(const char *name, byte port);
        bool getDigitalValue();
        void read();

        void setup();
        void show();
};

#endif
