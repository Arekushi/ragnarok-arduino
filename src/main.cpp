#include <Arduino.h>
#include <main_car.h>
#include <main_wifi.h>
#include <CarEndpoints.h>

AsyncWebServer *server = new AsyncWebServer(80);

void setup() {
    Serial.begin(115200);

    setupStates();
    setupCar();

    setupWiFi(server);
    setCarEndpoints(server, car);
}

void loop() {
    // executeMachine();
}
