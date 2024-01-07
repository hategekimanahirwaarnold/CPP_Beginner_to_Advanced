#include <iostream>

using namespace std;

const double PI = 3.1415;

/**
 * class methods have access to the member variables,
 * regardless of whether they are public or private
*/

class Cylinder {
    public:
        double volume() {
            return PI  * base_radius * base_radius * height;
        }

    // private:      (if you want variables to be inaccessible outside the class)
        // member variables
        double base_radius{1};
        double height{2};
};

int main()
{
    Cylinder cylinder1; // objects
    
    cout << "volume: " << cylinder1.volume() << endl;
    cout << "radius: " << cylinder1.base_radius << endl;
    cout << "height: " << cylinder1.height << endl;

    cylinder1.base_radius = 10;
    cylinder1.height = 3;

    cout << "volume: " << cylinder1.volume() << endl;
    cout << "radius: " << cylinder1.base_radius << endl;
    cout << "height: " << cylinder1.height << endl;

    return 0;
}
