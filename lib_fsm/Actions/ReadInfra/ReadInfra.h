#ifndef ReadInfra_h
#define ReadInfra_h

#include <Action.h>

class Car;

class ReadInfra : public Action<Car> {
    
    public:
        void execute(Car data) override;
};

#endif