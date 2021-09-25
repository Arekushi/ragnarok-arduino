#ifndef Car_characteristic_callbacks_h
#define Car_characteristic_callbacks_h

#include <GenericCharacteristicCallbacks.h>
#include <Dictionary.h>
#include <Action.h>

class Car;

class CarCharacteristicCallbacks : public GenericCharacteristicCallbacks<Car> {

    public:
        CarCharacteristicCallbacks();
        void onWrite(BLECharacteristic *characteristic) override;
        void setup(Bluetooth<Car> *bluetooth) override;
        void setActions();
    
    private:
        Dictionary<std::string, Action<Car>> *m_actions;
};

#endif