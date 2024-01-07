#include <iostream>

using namespace std;

const double PI = 3.1415;

/**
 * class methods have access to the member variables,
 * regardless of whether they are public or private
 * 
 * if you don't have a constructor in your class, the
 * compiler will generate a default compiler.
*/

class Cylinder {
    public:
        // constructors
        /* below code is the same as this: 
        Cylinder() {

        }
        => we are creating an empty default constructor
        => constructors have to be puclic
        */
        Cylinder() = default;
        Cylinder(double rad, double hei) {
            base_radius = rad;
            height = hei;
        }
        double volume() {
            return PI  * base_radius * base_radius * height;
        }

    private:
        // member variables
        double base_radius{};
        double height{};
};

int main()
{
    Cylinder cylinder1; // objects
    // we will use the variable values from the constructor
    cout << "volume: " << cylinder1.volume() << endl;

    return 0;
}
