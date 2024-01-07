#include <iostream>
#include "cylinder.h"

using namespace std;   
int main() {
    Cylinder cylinder1(10, 10);

    cylinder1.volume();

    // managing a stack object through pointers
    Cylinder* p_cylinder1 = &cylinder1;
    
    cout << "Volume from pointer: " << p_cylinder1->volume() << endl;
    cout << "Radius from pointer: " << p_cylinder1->get_radius() << endl;
    return 0;
}
