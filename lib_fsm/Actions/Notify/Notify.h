#ifndef Notify_h
#define Notify_h

#include <Action.h>

class Car;

class Notify : public Action<Car> {
   
    public:
        void execute(Car data) override;
};

#endif
