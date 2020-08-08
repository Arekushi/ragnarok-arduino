#ifndef CurvedFrontLeft_State_h
#define CurvedFrontLeft_State_h

#include <State.h>

class Car;

class CurvedFrontLeft : public State<Car> {

    public:
        CurvedFrontLeft() : base::State("CurvedFrontLeft") {}
        void enter(Car data) override;
        void exit(Car data) override;
        void setActions() override;
        void setTransitions() override;
};

#endif
