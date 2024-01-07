#include <iostream>

using namespace std;

int main() {
    cout << "Enter a value: ";
    int value;
    cin >> value;
    cout << value << endl;

    // read 2 numbers
    cout << "Enter 2 (x, y) numbers: ";
    double x, y;
    cin >> x;
    cout << endl;
    cin >> y;
    cout << "Your numbers: "<< endl
         << x << endl
         << y << endl;

    return 0;
}