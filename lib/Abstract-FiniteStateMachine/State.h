#ifndef Abstract_State_h
#define Abstract_State_h

#include <Arduino.h>
#include <Action.h>
#include <Transition.h>
#include <StateMachine.h>
#include <ArrayList.h>

namespace AbstractFiniteStateMachine {

    template <class T>
    class State {
        private:
            ArrayList<Action<T>> *actions;
            ArrayList<Transition<T>> *transitions; 

        public:
            State() {
               actions = new ArrayList<Action<T>>; 
               transitions = new ArrayList<Transition<T>>; 
            }

            ArrayList<Action<T>> *getArrayActions() {
                return actions;
            }

            ArrayList<Action<T>> *getArrayTransitions() {
                return transitions;
            }

            void addAction(Action<T> *action) {
                actions->addElement(action);
            }

            void addTransition(Transition<T> *transition) {
                transitions->addElement(transition);
            }

            void executeAction(T data) {
                Action<T> **array = actions->getArray();

                for(byte i = 0; i < actions->getLength(); i++) {
                    array[i]->execute(data);
                }
            }

            void checkTransitions(StateMachine<T> machine) {
                Transition<T> **array = transitions->getArray();

                for(byte i = 0; i < transitions->getLength(); i++) {
                    if(array[i]->getDecision()->decision(machine.data)) {
                        machine.transitionNextState(array[i]->getTrueState());

                    } else {
                        machine.transitionNextState(array[i]->getFalseState());
                    }
                }
            }

            void executeState(StateMachine<T> &machine) {
                executeAction(machine.data);
                checkTransitions(machine);
            }

            virtual void enter(T data) = 0;
            virtual void exit(T data) = 0;
    };
}

#endif
