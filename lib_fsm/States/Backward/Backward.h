#ifndef Backward_State_h
#define Backward_State_h

#include <State.h>

class Car;

class Backward : public State<Car> {

    public:
        Backward() : base::State("Backward") {}
        void enter(Car data) override;
        void exit(Car data) override;
        void setActions() override;
        void setTransitions() override;
};

#endif
