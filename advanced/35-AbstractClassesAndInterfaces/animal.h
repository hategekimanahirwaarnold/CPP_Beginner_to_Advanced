#ifndef ANIMAL_H
#define ANIMAL_H

#include "stream_insertable.h"

using namespace std;

class Animal : public StreamInsertable
{
public:
    Animal() = default;
    Animal(string_view description);
    virtual ~Animal();

    virtual void breathe()const{
        cout << "Animal::breathe called for : " << m_description << endl;
    }
    // Stream insertable interface
    virtual void stream_insert(ostream& out) const override{
        out << "Animal [description: " << m_description << "]";
    }
protected:
    string m_description;
};

#endif // ANIMAL_H
