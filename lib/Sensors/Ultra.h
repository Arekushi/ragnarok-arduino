#ifndef Ultra_h
#define Ultra_h

#include <Arduino.h>
#include <Ultrasonic.h>

class Ultra {

    public:
        Ultra(byte port1, byte port2);
        float read();
        void show();

    private:
        Ultrasonic *ultrasonic;
};

#endif
