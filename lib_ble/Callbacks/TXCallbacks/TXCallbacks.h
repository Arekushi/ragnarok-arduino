#ifndef TX_callbacks_h
#define TX_callbacks_h

#include <NimBLEDevice.h>
#include <Singleton.h>

template <class T>
class Bluetooth;

template <class T>
class TXCallbacks : public NimBLECharacteristicCallbacks {

     friend class Singleton<T>;

     public:
          Bluetooth<T> *bluetooth;

          virtual void setup(Bluetooth<T> *bluetooth) = 0;
};

#endif
