#include <Bluetooth.h>

Bluetooth::Bluetooth() {
    setup();
    start();
}

void Bluetooth::setup() {
    BLEDevice::init(BLUETOOTH_NAME);

    server = BLEDevice::createServer();
    server->setCallbacks(new ServerCallbacks());

    service = server->createService(SERVICE_UUID);

    characteristicTX = service->createCharacteristic(CHARACTERISTIC_UUID_TX, BLECharacteristic::PROPERTY_NOTIFY);
    characteristicTX->addDescriptor(new BLE2902());

    characteristicRX = service->createCharacteristic(CHARACTERISTIC_UUID_RX, BLECharacteristic::PROPERTY_WRITE);
    characteristicRX->setCallbacks(new CharacteristicCallbacks());
}

void Bluetooth::start() {
    service->start();
    server->getAdvertising()->start();
}
