#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

class Bird : public Animal
{
public:
    Bird() = default;
    Bird(string_view wing_color, string_view description);
    virtual ~Bird();
    //This is contradictory : virtual and final have counter acting effects.
    //Final wins here
    virtual void fly() const final{
        cout << "Bird::fly() called for bird : " << m_description << endl;
    }
private :
    string m_wing_color;
};

#endif // BIRD_H
