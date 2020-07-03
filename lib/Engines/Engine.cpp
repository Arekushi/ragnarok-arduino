#include <Arduino.h>
#include <Engine.h>

Engine::Engine(int8_t port) {
    this->port = port;
}

void Engine::setup() {
    pinMode(port, OUTPUT);
}

void Engine::write(int8_t power) {
    analogWrite(port, power);
}
