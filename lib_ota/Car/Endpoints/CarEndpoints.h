#ifndef car_endpoints_h
#define car_endpoints_h

#include <AsyncElegantOTA.h>
#include <Car.h>

void setCarEndpoints(AsyncWebServer *server, Car *car) {
    server->on("car/status", HTTP_GET, [&](AsyncWebServerRequest *request) {
        request->send(200, "text/plain", "Mensagem de Test II");
    });
}

#endif
