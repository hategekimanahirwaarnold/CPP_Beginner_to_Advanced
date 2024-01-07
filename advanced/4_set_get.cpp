#include <iostream>

using namespace std;

const double PI = 3.1415;

class Cylinder {
    public:
        Cylinder() = default;
        Cylinder(double rad, double hei) {
            base_radius = rad;
            height = hei;
        }
        double volume() {
            return PI  * base_radius * base_radius * height;
        }
        // getters and setters
        double get_radius() {
            return base_radius;
        }
        double get_height() {
            return height;
        }
        void set_radius(double value) {
            base_radius = value;
        }
        void set_height(double value) {
            height = value;
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
