#ifndef Wait_h
#define Wait_h

#include <Decision.h>

using namespace AbstractFiniteStateMachine;

class Car;

class Wait : public Decision<Car> {

    public:
        bool decision(Car data) override;
};

#endif
