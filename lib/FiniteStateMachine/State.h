#ifndef State_h
#define State_h

#include <Arduino.h>

template <class T>
class State {
    public:
        virtual void enter(T owner);
        virtual void execute(T owner);
        virtual void exit(T owner);
};

#endif