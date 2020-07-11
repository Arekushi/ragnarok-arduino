#ifndef Abstract_State_h
#define Abstract_State_h

#include <Arduino.h>
#include <Action.h>
#include <Transition.h>
#include <StateMachine.h>
#include <Singleton.h>

namespace AbstractFiniteStateMachine {

    template <class T>
    class State {

        friend class Singleton<T>;

        protected:
            Action<T> **actions;
            Transition<T> **transitions;
            byte actions_size;
            byte transitions_size;
            bool isSetup = false;

        public:
            State() {
                actions = new Action<T>*[20];
                transitions = new Transition<T>*[20];
                actions_size = 0;
                transitions_size = 0;
            }

            void addAction(Action<T> *action) {
                actions[actions_size] = action;
                actions_size++;;
            }

            void addTransition(Transition<T> *transition) {
                transitions[transitions_size] = transition;
                transitions_size++;
            }

            void executeAction(T &data) {
                for(byte i = 0; i < actions_size; i++) {
                    actions[i]->execute(data);
                }
            }

            void checkTransitions(StateMachine<T> &machine) {
                for(byte i = 0; i < transitions_size; i++) {
                    if(transitions[i]->getDecision()->decision(machine.data)) {
                        machine.transitionNextState(transitions[i]->getTrueState());

                    } else {
                        machine.transitionNextState(transitions[i]->getFalseState());
                    }
                }
            }

            void executeState(StateMachine<T> &machine) {
                executeAction(machine.data);
                checkTransitions(machine);
            }

            virtual void enter(T data) = 0;
            virtual void exit(T data) = 0;
            virtual void setActions() = 0;
            virtual void setTransitions() = 0;

            virtual void setup() {
                isSetup = true;
                setTransitions();
                setActions();
            }
    };
}

#endif
