#ifndef Back_h
#define Back_h

#include <Action.h>

class Car;

class Back : public Action<Car> {
   
    public:
        void execute(Car data) override;
};

#endif
