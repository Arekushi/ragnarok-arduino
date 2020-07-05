#ifndef ArrayList_h
#define ArrayList_h

template <class T>
class ArrayList {

    private:
        T **data = new T*[0];

    public:
        static byte length;

        void addElement(T *element) {
            T **newData = new T*[length+1];

            for(byte i = 0; i < length; i++) {
                newData[i] = data[i];
            }

            newData[length] = element;
            delete[] data;
            data = newData;
            length++;
        }

        T **getArray() {
            return data;
        }
};

template<class T>
byte ArrayList<T>::length = 0;

#endif
