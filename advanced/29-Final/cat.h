#ifndef CAT_H
#define CAT_H

#include "feline.h"
// anytime one tries to inherit cat there will be compiler error
class Cat final : public Feline 
{
public:
    Cat() = default;
    Cat(string_view fur_style, string_view description);
    virtual ~Cat();

    // Interesting fact #2
    //Useless method. Cat is final, so no one will be deriving from this class and have a chance to specialize it
    //However, there will be no compiler errors
    virtual void miaw() const{
        cout << "Cat::miaw called : Woof!" << endl;
    }
    virtual void breathe()const override{
        cout << "Cat::breathe called for : " << m_description << endl;
    }
    // this method is useful though, since it is overriding the method in feline class
    virtual void run() const override{
        cout << "Cat " << m_description << " is running" << endl;
    }
};

#endif // CAT_H
