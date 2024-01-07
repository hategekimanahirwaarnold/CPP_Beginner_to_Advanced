#include <iostream>

int main() {
    int x = 10;
    int y = 3;
    double z = x + y;

    std::cout << z;
    // devision
    z = (double)x / y;
    
    std::cout << "\n";
    std::cout <<  z << std::endl;

    // increment
    std::cout << "initial x: " << x << std::endl;
    z = x++; // z is 10
    std::cout << "first x: " << z << std::endl;
    z = ++x; // z is 12
    std::cout << "second x: " << z << std::endl;

    // implement bodmass
    x = 10;
    y = 2;
    z = (x + 14) / (3 * y);
    std::cout << "Bodmass: " << z << std::endl;

    return 0;
}