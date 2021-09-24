#ifndef Generic_characteristic_callbacks_h
#define Generic_characteristic_callbacks_h

#include <BLEDevice.h>
#include <Singleton.h>

template<class T>
class Bluetooth;

template<class T>
class InputHandler;

template <class T>
class GenericCharacteristicCallbacks: public BLECharacteristicCallbacks {

     friend class Singleton<T>;

     public:
          Bluetooth<T> *bluetooth;

          void setup(Bluetooth<T> *bluetooth) {
               this->bluetooth = bluetooth;
          }

          virtual void onWrite(BLECharacteristic *characteristic) = 0;
};

#endif
