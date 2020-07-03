#ifndef Ultra_h
#define Ultra_h

#include <Arduino.h>
#include <Ultrasonic.h>

class Ultra {

    public:
        Ultra(int8_t port1, int8_t port2);
        float read();
        void show();

    private:
        Ultrasonic *ultrasonic;
};

#endif
