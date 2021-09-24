#ifndef Car_characteristic_callbacks_h
#define Car_characteristic_callbacks_h

#include <GenericCharacteristicCallbacks.h>

class Car;

class CarCharacteristicCallbacks : public GenericCharacteristicCallbacks<Car> {
    public:
        void onWrite(BLECharacteristic *characteristic) override;
};

#endif