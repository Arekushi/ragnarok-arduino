#ifndef Back_State_h
#define Back_State_h

#include <State.h>

class Car;

class Back : public State<Car> {

    public:
        Back() : base::State("Back") {}
        void enter(Car data) override;
        void exit(Car data) override;
        void setActions() override;
        void setTransitions() override;
};

#endif
