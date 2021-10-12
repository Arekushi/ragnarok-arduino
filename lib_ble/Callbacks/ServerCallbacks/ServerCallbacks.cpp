#include <Arduino.h>
#include <ServerCallbacks.h>

void ServerCallbacks::onConnect(NimBLEServer *pServer) {
  Serial.println("Conectou");
}

void ServerCallbacks::onDisconnect(NimBLEServer *pServer) {
  Serial.println("Desconectou");
}
