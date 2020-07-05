#ifndef Run_h
#define Run_h

#include <Action.h>

using namespace AbstractFiniteStateMachine;

class Car;

class Run : public Action<Car> {
    
    public:
        Run();
        void execute(Car data) override;
};

#endif