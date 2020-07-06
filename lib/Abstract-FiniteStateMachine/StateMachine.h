#ifndef Abstract_StateMachine_h
#define Abstract_StateMachine_h

namespace AbstractFiniteStateMachine {

    template <class T> class State;

    template<class T>
    class StateMachine {

        private:
            State<T> *currentState;
            State<T> *remainState;
            State<T> *previousState;

        public:
            T &data;

            StateMachine(T &data, State<T> *state) : data(data) {
                this->currentState = state;
                this->currentState->enter(this->data);
            }

            State<T> *getCurrentState() {
                return currentState;
            }

            State<T> *getRemainState() {
                return remainState;
            }

            State<T> *getPreviousState() {
                return previousState;
            }

            void setCurrentState(State<T> *newState) {
                currentState->exit(data);
                previousState = currentState;
                *currentState = *newState;
                currentState->enter(data);
            }

            void executeMachine() {
                currentState->executeState(*this);
            }

            void transitionNextState(State<T> *nextState) {
                if(nextState != remainState) {
                    setCurrentState(nextState);
                }
            }
    };
}

#endif
