/**
 * It is better to create your own default constructors
 * especially if you are inheriting classes, because the compiler
 * will call them when building your classes and it may throw an error
 * if it losses one.
 * Our objects will be build starting from the most basic ones.
*/
#include "person1.h"
#include "engineer1.h"

int main() {
    cout << "------------------------------\n";
    Engineer1 e1("Hirwa, The Hat", 23, "Katabaro"); // here we will use inherited constructor
    cout << "Engineer1 : " << e1 << endl;

    cout << "------------------------------\n";
    Engineer1 e2("Hirwa, The Hat", 23, "Katabaro", 22); // Here we will use custom constructor
    cout << "Engineer2 : " << e2 << endl;

 
    return 0;
}

/**
 * Facts:
 * -Copy constructors are not inherited: but you won't usually notice this
 * as the compiler will insert an automatic copy constructor.
 * -Inherited constructors are base constructors. They have no knowledge of the
 * derived class. Any member from the derived class will just contain junk or 
 * whatever default value it's initialized with.
 * -Constructors are inherited with whatever access specifier they had in base class
 * -Inheriting constructors add a level of confusion to your code, it's not clear which
 * constructor is building your object. It is recommended to avoid them and only use
 * this feature if no other option is available.
*/
