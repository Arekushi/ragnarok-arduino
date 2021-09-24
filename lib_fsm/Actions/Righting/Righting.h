#ifndef Righting_h
#define Righting_h

#include <Action.h>

class Car;

class Righting : public Action<Car> {
   
    public:
        void execute(Car data) override;
};

#endif
