#ifndef Ultrasonic_h
#define Ultrasonic_h

#include <Arduino.h>

class Ultrasonic {

    public:
        Ultrasonic(byte trigPin, byte echoPin);
        void setup();
        void show();
        unsigned int read();

    private:
        byte trigPin;
        byte echoPin;
        unsigned long duration;
};

#endif
