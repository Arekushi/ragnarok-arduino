#ifndef Abstract_Action_h
#define Abstract_Action_h

namespace AbstractFiniteStateMachine {

    template <class T>
    class Action {
        public:
            virtual void execute(T data);
    };
}

#endif
