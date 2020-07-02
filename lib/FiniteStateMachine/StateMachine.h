#ifndef StateMachine_h
#define StateMachine_h

#include <Arduino.h>
#include <Cart.h>
#include <State.h>

class StateMachine {

    protected:
        State* currentState;
        State* previousState;
        Cart cart;

    public:
        StateMachine(Cart cart, State* state);
        void SwitchState(State* newState);
        void SwitchPreviousState();
        void ExecuteState();
};

#endif
