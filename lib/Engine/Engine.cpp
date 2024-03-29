#include <Engine.h>
#include <Arduino.h>

Engine::Engine(const byte *port, byte pwm) {
    this->port = port;
    this->pwm = pwm;

    setup();
}

void Engine::setup() {
    pinMode(port[0], OUTPUT);
    pinMode(port[1], OUTPUT);
    ledcSetup(pwm, frequence, resolution);
    ledcAttachPin(port[2], pwm);
    changePotency(200);
}

void Engine::forward() {
    digitalWrite(port[0], HIGH);
    digitalWrite(port[1], LOW);
}

void Engine::backward() {
    digitalWrite(port[1], HIGH);
    digitalWrite(port[0], LOW);
}

void Engine::stop() {
    digitalWrite(port[1], HIGH);
    digitalWrite(port[0], HIGH);
}

void Engine::changePotency(byte power) {
    if(power != 0) {
        ledcWrite(pwm, power); 
    }
}
