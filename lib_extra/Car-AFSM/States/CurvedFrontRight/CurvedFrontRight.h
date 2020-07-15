#ifndef CurvedFrontRight_State_h
#define CurvedFrontRight_State_h

#include <State.h>

class Car;

class CurvedFrontRight : public State<Car> {

    public:
        CurvedFrontRight() : base::State("CurvedFrontRight") {}
        void enter(Car data) override;
        void exit(Car data) override;
        void setActions() override;
        void setTransitions() override;
};

#endif
