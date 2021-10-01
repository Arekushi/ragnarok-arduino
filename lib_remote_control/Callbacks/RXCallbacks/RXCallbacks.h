#ifndef RX_callbacks_h
#define RX_callbacks_h

#include <NimBLEDevice.h>
#include <Singleton.h>

template <class T>
class Bluetooth;

template <class T>
class RXCallbacks : public NimBLECharacteristicCallbacks {

     friend class Singleton<T>;

     public:
          Bluetooth<T> *bluetooth;

          virtual void setup(Bluetooth<T> *bluetooth) = 0;
          virtual void onWrite(NimBLECharacteristic *characteristic) = 0;
};

#endif
