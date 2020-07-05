#ifndef Abstract_Decision_h
#define Abstract_Decision_h

namespace AbstractFiniteStateMachine {

    template <class T>
    class Decision {
        public:
            virtual bool decision(T data);
    };
}

#endif