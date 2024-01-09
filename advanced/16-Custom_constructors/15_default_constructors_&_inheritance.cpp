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
    Civil ce1;

    return 0;
}
