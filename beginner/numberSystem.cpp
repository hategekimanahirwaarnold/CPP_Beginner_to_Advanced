#include <iostream>

using namespace std;

int main() {
    int number = 0b111;
    cout << number << endl;
    int hexn = 0xf;
    cout << "hex: " << hexn << endl;
    
    unsigned int nbr = 255; // unsigned makes it a must for a nbr to be positive. This comes at the expanse of printing a bigger number when nbr < 0;
    cout << "un nbr: "<< nbr << endl;

    return 0;
}
