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
    Person p1("Hirwa Arnold", 27, "Winterfall Cold 33St#75");
    cout << "person1 : " << p1 << endl;
    
    cout << "------------------------------\n";
    Engineer1 e1("Hirwa Engeiner", 37, "Kimisagara Cold 33St#75", 12);
    cout << "Engineer1 : " << e1 << endl;

    cout << "------------------------------\n";
    Civil c1("Hatageka Engeiner", 22, "Kimisagara Nyarugenge 33St#75", 32, "Kaburimbo");
    cout << "Civil1 : " << c1 << endl;


    return 0;
}
