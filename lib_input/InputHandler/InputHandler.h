#ifndef Input_handler_h
#define Input_handler_h

#include <map>
#include <string>
#include <Action.h>
#include <Singleton.h>

using namespace std;

template<class T>
class InputHandler {

    friend class Singleton<T>;

    public:
        std::map<std::string, Action<T>*> actions;

        void setup() {
            setActions();
        }

        void addAction(std::string code, Action<T> *action) {
            actions.insert(make_pair(code, action));
        }

        Action<T> *getAction(std::string code) {
            for (auto i = actions.begin(); i != actions.end(); i++) {
                if (i->first == code) {
                    return i->second;
                }
            }

            return nullptr;
        }

        virtual void setActions() = 0;
};

#endif
