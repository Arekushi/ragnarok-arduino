#ifndef Singleton_h
#define Singleton_h

template <class T>
class Singleton {

    private:
        static T *instance;

    protected:
        Singleton() {}

    public:
        static T *getInstance() {
            if(!instance) {
                instance = new T;
            }

            return instance;
        }
};

template<class T>
T *Singleton<T>::instance = 0;

#endif
