#include <iostream>

using namespace std;

int main()
{
    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of string: " << sizeof(string) << endl;
    cout << "size of double: " << sizeof(double) << endl;
    cout << "size of float: " << sizeof(float) << endl; // can only handle 7 digits
    cout << "size of short: " << sizeof(short) << endl;
    cout << "size of long: " << sizeof(long) << endl;
    cout << "size of long long: " << sizeof(long long) << endl; // precision 15 / can handle 15 digits
    cout << "size of long double: " << sizeof(long double) << endl;// precision = 20 or 15+ / 15+ digits

    // with double one can represent floating numbers in scientific notation
    double nubr = 3.4983e3; //  this equals to 3498.33
    double smallnbr = 1000e-3; // this equals to 1
    // big floating numbers are narrowed down
    float flt = 192400023.0f; // this will be narrowed to 192400016

    return 0;
}
