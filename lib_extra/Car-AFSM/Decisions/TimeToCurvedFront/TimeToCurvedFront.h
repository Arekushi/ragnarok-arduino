#ifndef TimeToCurvedFront_h
#define TimeToCurvedFront_h

#include <Decision.h>

using namespace AbstractFiniteStateMachine;

class Car;

class TimeToCurvedFront : public Decision<Car> {

    public:
        unsigned short int current;
        unsigned short int start;

        bool decision(Car data) override;
};

#endif
