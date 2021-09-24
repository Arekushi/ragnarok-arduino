#ifndef Characteristic_callbacks_h
#define Characteristic_callbacks_h

#include <BLEDevice.h>

class CharacteristicCallbacks: public BLECharacteristicCallbacks {

     public:
          void onWrite(BLECharacteristic *characteristic);
};

#endif
