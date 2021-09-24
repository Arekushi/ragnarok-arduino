#ifndef Server_callbacks_h
#define Server_callbacks_h

#include <BLEDevice.h>

class ServerCallbacks: public BLEServerCallbacks {

    public:
        void onConnect(BLEServer *pServer);

        void onDisconnect(BLEServer *pServer);
};

#endif
