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
    // no downstream class will override dog
    void run() const override final{
        cout << "Dog " << m_description << " is running" << endl;
    }
    void do_some_dog_thingy(){
        cout << "Doing some doggy thingy..., speed" << m_speed << endl;
    }
private:
    double m_speed{};
};

#endif // DOG_H
