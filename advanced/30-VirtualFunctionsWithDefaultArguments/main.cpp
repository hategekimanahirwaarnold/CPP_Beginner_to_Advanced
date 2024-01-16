/**
 * If we use a base pointer to call derived class through polymorphism,
 * the compiler will use default arguments from the base class even if it will use 
 * the specific function of derived class. 
 * 
 * It is better to know this, since this behaviour maybe something you don't want.
*/

#include "derived.h"

int main() {
    //Base ptr : Uses polymorphism
    Base * base_ptr1 = new Derived;
    double result = base_ptr1->add();
    cout << "Result (base ptr) : " << result << endl; // 12 (compiler will use default values from base class)


    cout << "-----------------------\n";
    // Base ref : Uses Polymorphism
    Derived derived1;
    Base& base_ref1 = derived1;
    result = base_ref1.add();
    cout << "Result (base ref) : " << result << endl; // 12 (uses default values too.)
    cout << "-----------------------\n";

    // Raw result
    Base base3;
    result = base3.add();
    cout << "raw result : " << result << endl; // 11

    //Direct object : uses static binding
    Derived derived2;
    result = derived2.add();
    cout << "Result (Direct object) : " << result << endl; // 22
    cout << "---------------------------\n";
    //Raw objects - slicing : uses static binding
    Base base1 = derived2;
    result = base1.add();
    cout << "Result (Raw objects assignment) : " << result << endl; // 11

    return 0;
}
