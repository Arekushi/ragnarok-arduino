#include <RXCallbacksCar.h>
#include <Car.h>

#include <Forward.h>
#include <Backward.h>
#include <AligningLeft.h>
#include <AligningRight.h>
#include <Stationary.h>

RXCallbacksCar::RXCallbacksCar() {
    m_states = new Dictionary<const char, State<Car>>();
}

void RXCallbacksCar::setup(Bluetooth<Car> *bluetooth) {
    this->bluetooth = bluetooth;
    setActions();
}

void RXCallbacksCar::setActions() {
    m_states->add("FW", Singleton<Forward>::getInstance());
    m_states->add("BW", Singleton<Backward>::getInstance());
    m_states->add("AR", Singleton<AligningRight>::getInstance());
    m_states->add("AL", Singleton<AligningLeft>::getInstance());
    m_states->add("ST", Singleton<Stationary>::getInstance());
}

void RXCallbacksCar::onWrite(NimBLECharacteristic *characteristic) {
    std::string rxValue = characteristic->getValue();
    
    if (rxValue.length() > 0) {
        char* value = const_cast<char*>(rxValue.c_str());
        State<Car> *state = m_states->get(value);
        State<Car> *currentState = bluetooth->data.machine->currentState();

        if (state != nullptr) {
            if(state != currentState) {
                bluetooth->data.machine->setCurrentState(state);
            }
        }
    }
}
