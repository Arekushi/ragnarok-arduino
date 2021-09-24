#include <CarCharacteristicCallbacks.h>
#include <Car.h>

void CarCharacteristicCallbacks::onWrite(BLECharacteristic *characteristic) {
    std::string rxValue = characteristic->getValue(); 

    if (rxValue.length() > 0) {
        bluetooth->input->getAction(rxValue)->execute(bluetooth->data);
    }
}
