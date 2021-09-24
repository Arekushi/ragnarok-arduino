#ifndef CarInputHandler_h
#define CarInputHandler_h

#include <InputHandler.h>

class Car;

class CarInputHandler : public InputHandler<Car> {
    public:
        void setActions() override;
};

#endif