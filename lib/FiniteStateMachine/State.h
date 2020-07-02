#ifndef State_h
#define State_h

#include <Arduino.h>
#include <Cart.h>

class State {
    public:
        virtual void enter(Cart cart);
        virtual void execute(Cart cart);
        virtual void exit(Cart cart);
};

#endif