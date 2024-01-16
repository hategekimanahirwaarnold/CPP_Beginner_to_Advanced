#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <string_view>
#include <iostream>

using namespace std;

class Animal
{
public:
    Animal() = default;
    Animal(string_view description);
    virtual ~Animal(); // putting virtual only here is enough

    virtual void breathe()const{
        cout << "Animal::breathe called for : " << m_description << endl;
    }
protected:
    string m_description;
};

#endif // ANIMAL_H
