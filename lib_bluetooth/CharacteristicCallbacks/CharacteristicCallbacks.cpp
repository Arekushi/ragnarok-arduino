#include <CharacteristicCallbacks.h>

void CharacteristicCallbacks::onWrite(BLECharacteristic *characteristic) {
    std::string rxValue = characteristic->getValue(); 

    if (rxValue.length() > 0) {
        if (rxValue.find("L1") != -1) {
                // Do something
        }
        else if (rxValue.find("L0") != -1) {
                // Do something
        }
        else if (rxValue.find("B1") != -1) {
                // Do something
        }
        else if (rxValue.find("B0") != -1) {
                // Do something
        }
    }
}
