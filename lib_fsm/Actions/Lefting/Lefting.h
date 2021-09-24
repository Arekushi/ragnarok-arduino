#ifndef Lefting_h
#define Lefting_h

#include <Action.h>

class Car;

class Lefting : public Action<Car> {
   
    public:
        void execute(Car data) override;
};

#endif
