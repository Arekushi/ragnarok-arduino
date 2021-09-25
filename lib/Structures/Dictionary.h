#ifndef Single_again_h
#define Single_again_h

#include <Arduino.h>
#include <ArrayList.h>

template<class K, class V>
class Dictionary {
    private:
        ArrayList<K> *m_keys;
        ArrayList<V> *m_values;
        
    public:
        Dictionary() {
            m_keys = new ArrayList<K>();
            m_values = new ArrayList<V>();
        }

        void add(K *key, V *value) {
            m_keys->addElement(key);
            m_values->addElement(value);
        }

        V *get(K *key) {
            for(byte i = 0; i < m_values->getLength(); i++) {
                if(m_keys->getArray()[i] == key) {
                    return m_values->getArray()[i];
                }
            }

            return nullptr;
        }

        K **getKeys() {
            return m_keys.getArray();
        }

        V **getValues() {
            return m_values.getArray();
        }
};


#endif
