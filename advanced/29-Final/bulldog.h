#ifndef BULL_DOG_H
#define BULL_DOG_H
#include "dog.h"

class BullDog : public Dog
{
public:
    BullDog();
    virtual ~BullDog();
        // will throw compiler error since there is `final` keyword on dog's run method
    /*
    virtual void run() const override{
        cout << "Bulldog::run() called \n";
    }
    */
};

#endif