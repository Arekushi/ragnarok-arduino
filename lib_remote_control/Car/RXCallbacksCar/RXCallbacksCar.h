#ifndef RX_callbacks_car_h
#define RX_callbacks_car_h

#include <RXCallbacks.h>
#include <Dictionary.h>
#include <State.h>

class Car;

class RXCallbacksCar : public RXCallbacks<Car> {

    public:
        RXCallbacksCar();
        void onWrite(BLECharacteristic *characteristic) override;
        void setup(Bluetooth<Car> *bluetooth) override;
        void setActions();
    
    private:
        Dictionary<const char, State<Car>> *m_states;
};

#endif