#include <Arduino.h>
#include <State.h>
#include <Cart.h>
#include <StateMachine.h>

StateMachine::StateMachine(Cart cart, State* state) {
    this->cart = cart;
    this->currentState = state;
}

void StateMachine::SwitchState(State* newState) {
    currentState->exit(this->cart);
    previousState = currentState;
    currentState = newState;
    currentState->enter(this->cart);
}

void StateMachine::SwitchPreviousState() {
    SwitchState(previousState);
}

void StateMachine::ExecuteState() {
    currentState->execute(this->cart);
}
