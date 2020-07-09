#ifndef Stop_h
#define Stop_h

#include <Action.h>

using namespace AbstractFiniteStateMachine;

class Car;

class Stop : public Action<Car> {
    
    public:
        void execute(Car data) override;
};

#endif