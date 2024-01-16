#ifndef PIGEON_H
#define PIGEON_H

#include "bird.h"

class Pigeon : public Bird 
{
public:
    Pigeon() = default;
    Pigeon(string_view wing_color, string_view description);
    virtual ~Pigeon();

    virtual void coo() const{
        cout << "Pigeon::coo called : Woof!" << endl;
    }
    virtual void breathe()const override{
        cout << "Pigeon::breathe called for : " << m_description << endl;
    }
    virtual void fly() const override{
        cout << "Pigeon::fly() called for bird : " << m_description << endl;
    }
    // Stream insertable interface
    virtual void stream_insert(ostream& out) const override{
        out << "Pigeon [description: " << m_description << "]";
    }
};

#endif // PIGEON_H
