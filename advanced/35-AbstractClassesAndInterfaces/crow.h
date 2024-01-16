#ifndef CROW_H
#define CROW_H

#include "bird.h"

class Crow : public Bird 
{
public:
    Crow() = default;
    Crow(string_view wing_color, string_view description);
    virtual ~Crow();

    virtual void cow() const{
        cout << "Crow::cow called : Woof!" << endl;
    }
    virtual void breathe()const override{
        cout << "Crow::breathe called for : " << m_description << endl;
    }
    virtual void fly() const override{
        cout << "Crow::fly() called for bird : " << m_description << endl;
    }
    // Stream insertable interface
    virtual void stream_insert(ostream& out) const override{
        out << "Crow [description: " << m_description << "]";
    }
};

#endif // CROW_H
