#include <Arduino.h>
#include <Engine.h>

Engine::Engine(byte port) {
    this->port = port;
}

void Engine::setup() {
    pinMode(port, OUTPUT);
}

void Engine::write(byte power) {
    analogWrite(port, power);
}
