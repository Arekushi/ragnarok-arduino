#include <CarCharacteristicCallbacks.h>
#include <Car.h>

#include <Walk.h>

CarCharacteristicCallbacks::CarCharacteristicCallbacks() {
    m_actions = new Dictionary<std::string, Action<Car>>();
}

void CarCharacteristicCallbacks::setup(Bluetooth<Car> *bluetooth) {
    this->bluetooth = bluetooth;
    setActions();
}

void CarCharacteristicCallbacks::setActions() {
    this->m_actions->add(new std::string("WK"), Singleton<Walk>::getInstance());
}

void CarCharacteristicCallbacks::onWrite(BLECharacteristic *characteristic) {
    std::string rxValue = characteristic->getValue();

    if (rxValue.length() > 0) {
        // char* value = const_cast<char*>(rxValue.c_str());
        Action<Car> *action = m_actions->get(new std::string(rxValue));

        if (action != nullptr) {
            action->execute(bluetooth->data);
        }
    }
}
