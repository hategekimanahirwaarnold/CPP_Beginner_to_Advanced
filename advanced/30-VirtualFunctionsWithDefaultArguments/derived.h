#ifndef DERIVED_H
#define DERIVED_H
#include "base.h"

class Derived : public Base
{
public:
    Derived();
    ~Derived();

    virtual double add(double a = 10, double b = 10) const override{
        cout << "Derived::add() called" << endl;
        return (a + b + 2);
    }
};

#endif //DERIVED_H
