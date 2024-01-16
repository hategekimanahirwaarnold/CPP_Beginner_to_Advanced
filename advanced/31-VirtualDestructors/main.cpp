/**
 * When destructors are not virtual, the polymophic behaviour may
 * lead to memory leaks. This is becuase the most basic destructor (destructor of the type of pointer)
 * will be the only one to be called. Therefore, it is better to use virtual keyword to force polymophic effects.
*/


#include "dog.h"

int main(){
    //here there will be no problem.

    /**
     *  Dog destructor > animal Destructor
     * Dog dog1;
     */
    // This method will cause memory leaks in the absence of virtual keyword, since the only animal 
    // destructor will be called in the absence of virtual keyword to destructors of derived classes.
    Animal * animal_p = new Dog;
    delete animal_p;

    return 0;
};

// fun fact
/**
 * using virtual to only base pointer, all destructors will be called in order.
*/