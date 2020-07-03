#ifndef Ultra_h
#define Ultra_h

#include <Arduino.h>
#include <Ultrasonic.h>

class Ultra {

    public:
        Ultra(int port1, int port2);
        float readDistance();
        void showDistance();

    private:
        Ultrasonic *ultrasonic;
};

#endif