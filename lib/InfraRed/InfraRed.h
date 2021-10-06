#ifndef InfraRed_h
#define InfraRed_h

#include <Arduino.h>

class InfraRed {
    
    private:
        byte port;
        bool value;
        float analogValue;
        unsigned short int comparer;

    public:
        const char *name;

        InfraRed(const char *name, byte port, unsigned short int comparer);
        bool getValue();
        void read();
        void setup();
        void show();
};

#endif
