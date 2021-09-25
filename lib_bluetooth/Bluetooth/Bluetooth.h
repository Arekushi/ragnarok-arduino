#ifndef Bluetooth_h
#define Bluetooth_h

#include <Wire.h>
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>
#include <ServerCallbacks.h>
#include <GenericCharacteristicCallbacks.h>

template<class T>
class Bluetooth {
    
    public:
        T &data;
        GenericCharacteristicCallbacks<T> *callbacks;

        BLECharacteristic *characteristicTX;
        BLECharacteristic *characteristicRX;
        BLEService *service;
        BLEServer *server;

        Bluetooth(T &data, GenericCharacteristicCallbacks<T> *callbacks) : data(data) {
            this->callbacks = callbacks;
            this->callbacks->setup(this);
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
            BLEDevice::init(BLUETOOTH_NAME);

            server = BLEDevice::createServer();
            server->setCallbacks(new ServerCallbacks());
        }

        void initService() {
            service = server->createService(SERVICE_UUID);
        }

        void initTX() {
            characteristicTX = service->createCharacteristic(CHARACTERISTIC_UUID_TX, BLECharacteristic::PROPERTY_NOTIFY);
            characteristicTX->addDescriptor(new BLE2902());
        }

        void initRX() {
            characteristicRX = service->createCharacteristic(CHARACTERISTIC_UUID_RX, BLECharacteristic::PROPERTY_WRITE);
            characteristicRX->setCallbacks(callbacks);
        }
};

#endif
