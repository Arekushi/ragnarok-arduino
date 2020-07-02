#ifndef Front_State_h
#define Front_State_h

#include <Arduino.h>
#include <State.h>
#include <Cart.h>

class Front : public State {

    void enter(Cart cart) override;
    void execute(Cart cart) override;
    void exit(Cart cart) override;
};

#endif