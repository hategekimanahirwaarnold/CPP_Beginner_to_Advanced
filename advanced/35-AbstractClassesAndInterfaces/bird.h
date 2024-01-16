#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

class Bird : public Animal
{
public:
    Bird() = default;
    Bird(string_view wing_color, string_view description);
    virtual ~Bird();

    virtual void fly() const{
        cout << "Bird::fly() called for bird : " << m_description << endl;
    }
    // Stream insertable interface
    virtual void stream_insert(ostream& out) const override{
        out << "Bird [description: " << m_description << "]";
    }
private :
    string m_wing_color;
};

#endif // BIRD_H
