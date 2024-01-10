/**
 * It is better to create your own default constructors
 * especially if you are inheriting classes, because the compiler
 * will call them when building your classes and it may throw an error
 * if it losses one.
 * Our objects will be build starting from the most basic ones.
*/
#include "person1.h"
#include "engineer1.h"
#include "civil1.h"

int main() {
    cout << "------------------------------\n";
    Engineer1 e1("Hirwa Engeiner", 37, "Kimisagara Cold 33St#75", 12);
    cout << "Engineer1 : " << e1 << endl;
    /**
     * when copying e1 to e2 compiler will create
     * a default copy constructor.
     * But, if you want you may create your default constructor.
    */
    cout << "------------------------------\n";
    Engineer1 e2(e1);
    cout << "Engineer2 : " << e2 << endl;

    cout << "------------------------------\n";

    Civil c1("hirwa anrold", 22, "katabaro", 12, "computer science");
    cout << "-----------\n";
    Civil c2(c1);
    cout << "Civil2 : " << c2 << endl;
   
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
