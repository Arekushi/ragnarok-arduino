#ifndef main_wifi_h
#define main_wifi_h

#include <Arduino.h>
#include <AsyncElegantOTA.h>
#include <env.h>

using namespace WiFiEnv;

void logConnect() {
    while (WiFi.status() != WL_CONNECTED) {
        delay(250);
        Serial.print(".");
    }

    Serial.println(F(""));
    Serial.print(F("Connected to "));
    Serial.println(SSID);
    Serial.print(F("IP address: "));
    Serial.println(WiFi.localIP());
}

void setupWiFi(AsyncWebServer *server) {
    WiFi.mode(WIFI_STA);
    WiFi.begin(SSID, PASSWORD);

    logConnect();

    AsyncElegantOTA.begin(server);
    server->begin();
}

#endif