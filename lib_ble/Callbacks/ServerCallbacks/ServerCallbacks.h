#ifndef Server_callbacks_h
#define Server_callbacks_h

#include <NimBLEDevice.h>

class ServerCallbacks: public NimBLEServerCallbacks {

    public:
        void onConnect(NimBLEServer *pServer);
        void onDisconnect(NimBLEServer *pServer);
};

#endif
