#ifndef Run_h
#define Run_h

#include <Action.h>

class Car;

class Run : public Action<Car> {
   
    public:
        void execute(Car data) override;
};

#endif
