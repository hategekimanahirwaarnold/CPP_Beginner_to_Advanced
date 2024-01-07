#include <iostream>
#include "constants.h"
#include "cylinder.h"

using namespace std;

int main()
{
    Cylinder cylinder1; // objects
    // we will use the variable values from the constructor
    cout << "radus: " << cylinder1.get_radius() << endl;
    cout << "height: " << cylinder1.get_height() << endl;
    cout << "volume: " << cylinder1.volume() << endl;

    cylinder1.set_height(3);
    cylinder1.set_radius(10);

    cout << "radus: " << cylinder1.get_radius() << endl;
    cout << "height: " << cylinder1.get_height() << endl;
    cout << "volume: " << cylinder1.volume() << endl;

    return 0;
}
