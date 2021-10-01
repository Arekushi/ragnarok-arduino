#include <Arduino.h>
#include <ServerCallbacks.h>

void ServerCallbacks::onConnect(BLEServer *pServer) {
  Serial.println("Conectou");
}

void ServerCallbacks::onDisconnect(BLEServer *pServer) {
}
