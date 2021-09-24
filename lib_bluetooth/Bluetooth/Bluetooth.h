#ifndef Bluetooth_h
#define Bluetooth_h

#include <Wire.h>
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>
#include <CharacteristicCallbacks.h>
#include <ServerCallbacks.h>

class Bluetooth {
    
    public:
        BLECharacteristic *characteristicTX;
        BLECharacteristic *characteristicRX;
        BLEService *service;
        BLEServer *server;

        Bluetooth();
        void setup();
        void start();
    
    private:
        const char *BLUETOOTH_NAME = "Ragnarok-BLE";
        const char *SERVICE_UUID = "ab0828b1-198e-4351-b779-901fa0e0371e";
        const char *CHARACTERISTIC_UUID_RX = "4ac8a682-9736-4e5d-932b-e9b31405049c";
        const char *CHARACTERISTIC_UUID_TX = "0972EF8C-7613-4075-AD52-756F33D4DA91";
};

#endif
