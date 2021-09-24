#include <CarInputHandler.h>

#include <Walk.h>

void CarInputHandler::setActions() {
    addAction("WK", Singleton<Walk>::getInstance());
}
