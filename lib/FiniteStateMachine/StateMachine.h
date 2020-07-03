#ifndef StateMachine_h
#define StateMachine_h

#include <Arduino.h>
#include <State.h>

template<class T>
class StateMachine {

    private:
        T &owner;
        State<T> *currentState;
        State<T> *previousState;

    public:
        StateMachine(T &owner, State<T> *state) : owner(owner) {
            currentState = state;
            currentState->enter(owner);
        }

        void switchState(State<T> *newState) {
            currentState->exit(owner);
            previousState = currentState;
            currentState = newState;
            currentState->enter(owner);
        }

        void switchPreviousState() {
            switchState(previousState);
        }

        void executeState() {
            currentState->execute(this->owner);
        }
};

#endif
