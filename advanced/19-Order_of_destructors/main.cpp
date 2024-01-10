
#include "person1.h"
#include "engineer1.h"
#include "civil1.h"
/**
 * Destructors are called in reverse (in stack format)
 * In this case, the order of destructors will be:
 * Civil > Engineer1 > Person
*/
int main() {
    cout << "------------------------------\n";

    Civil c1("hirwa anrold", 22, "katabaro", 12, "computer science");

    return 0;
}
