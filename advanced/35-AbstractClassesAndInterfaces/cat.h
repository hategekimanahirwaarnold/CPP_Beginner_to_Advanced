#ifndef CAT_H
#define CAT_H

#include "feline.h"

class Cat : public Feline 
{
public:
    Cat() = default;
    Cat(string_view fur_style, string_view description);
    virtual ~Cat();

    virtual void miaw() const{
        cout << "Cat::miaw called : Woof!" << endl;
    }
    virtual void breathe()const override{
        cout << "Cat::breathe called for : " << m_description << endl;
    }
    virtual void run() const override{
        cout << "Cat " << m_description << " is running" << endl;
    }
    // Stream insertable interface
    virtual void stream_insert(ostream& out) const override{
        out << "Cat [description: " << m_description << "]";
    }
};

#endif // CAT_H
