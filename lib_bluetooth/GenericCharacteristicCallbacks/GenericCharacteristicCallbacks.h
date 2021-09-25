#ifndef Generic_characteristic_callbacks_h
#define Generic_characteristic_callbacks_h

#include <BLEDevice.h>
#include <Singleton.h>

template <class T>
class Bluetooth;

template <class T>
class GenericCharacteristicCallbacks: public BLECharacteristicCallbacks {

     friend class Singleton<T>;

     public:
          Bluetooth<T> *bluetooth;

          virtual void setup(Bluetooth<T> *bluetooth) = 0;
          virtual void onWrite(BLECharacteristic *characteristic) = 0;
};

#endif
