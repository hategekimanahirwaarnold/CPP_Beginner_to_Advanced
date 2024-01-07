#include <iostream>

using namespace std;

int main() {
    auto price = 99.99; // you can use auto in place of double, the compiler will know it
    auto interestRate = 3.67f; // you can use auto in place of f, but make sure to add f suffix
    auto fileSize = 90000L; // make sure to add L suffix. otherwise the compiler will confuse it with an int data type
    auto letter = 'a';
    auto isValid = false;
    auto var1 = 123u;
    auto var2 = 1233ul;
    auto var3 = 12311ll;

    // using {} enables to invoke compile time errors that avoid bugs
    int number {}; // this make sure that the number starts with 0 instead of garbage value.
    cout << number << endl;
    return 0;
}
