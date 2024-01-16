#ifndef DOG_H
#define DOG_H
#include "feline.h"

class Dog : public Feline 
{
public:
    Dog() = default;
    Dog(string_view fur_style, string_view description);
    virtual ~Dog();

    virtual void bark() const{
        cout << "Dog::bark called : Woof!" << endl;
    }
    virtual void breathe()const override{
        cout << "Dog::breathe called for : " << m_description << endl;
    }
    virtual void run() const override{
        cout << "Dog " << m_description << " is running" << endl;
    }
    // Stream insertable interface
    virtual void stream_insert(ostream& out) const override{
        out << "Dog [description: " << m_description << "]";
    }
};

#endif // DOG_H
