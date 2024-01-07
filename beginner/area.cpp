#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius;
    cout << "Enter the radius: " << endl;
    cin >> radius;
    double area = pow(radius, 2) * M_PI;

    cout << "The area of the circle with raidus" << radius << "is: " <<endl
        << area << endl;
    
    return 0;
}
