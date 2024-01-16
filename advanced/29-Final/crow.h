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
    // compiler error due to final keyword in Bird class' fly method
    /*
    virtual void fly() const override{
        cout << "Crow::fly() called for bird : " << m_description << endl;
    }
    */
};

#endif // CROW_H
