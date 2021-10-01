#ifndef Bluetooth_h
#define Bluetooth_h

#include <Wire.h>
#include <NimBLEDevice.h>
#include <NimBLEServer.h>
#include <NimBLEUtils.h>
// #include <BLE2902.h>
#include <ServerCallbacks.h>
#include <RXCallbacks.h>

template<class T>
class Bluetooth {
    
    public:
        T &data;
        RXCallbacks<T> *rxCallbacks;

        NimBLECharacteristic *characteristicTX;
        NimBLECharacteristic *characteristicRX;
        NimBLEService *service;
        NimBLEServer *server;

        Bluetooth(T &data, RXCallbacks<T> *rxCallbacks) : data(data) {
            this->rxCallbacks = rxCallbacks;
            this->rxCallbacks->setup(this);
            setup();
        }

        void setup() {
            initServer();
            initService();
            initTX();
            initRX();
        }

        void start() {
            service->start();
            server->getAdvertising()->start();
        }
    
    private:
        const char *BLUETOOTH_NAME = "Ragnarok-BLE";
        const char *SERVICE_UUID = "ab0828b1-198e-4351-b779-901fa0e0371e";
        const char *CHARACTERISTIC_UUID_RX = "4ac8a682-9736-4e5d-932b-e9b31405049c";
        const char *CHARACTERISTIC_UUID_TX = "0972EF8C-7613-4075-AD52-756F33D4DA91";

        void initServer() {
            NimBLEDevice::init(BLUETOOTH_NAME);

            server = NimBLEDevice::createServer();
            server->setCallbacks(new ServerCallbacks());
        }

        void initService() {
            service = server->createService(SERVICE_UUID);
        }

        void initTX() {
            characteristicTX = service->createCharacteristic(CHARACTERISTIC_UUID_TX, NIMBLE_PROPERTY::NOTIFY);
            characteristicTX->addDescriptor(new NimBLE2904());
        }

        void initRX() {
            characteristicRX = service->createCharacteristic(CHARACTERISTIC_UUID_RX, NIMBLE_PROPERTY::WRITE);
            characteristicRX->setCallbacks(rxCallbacks);
        }
};

#endif
