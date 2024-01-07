#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 20;

    cout << x << endl
              << y << endl;
    // task
    int sales = 95000;
    int state_tax = 4;
    int county_tax = 2;

    cout << "Sales = $" << sales << endl
         << "State Tax = " << state_tax << "%"<< endl
         << "Counts Tax = " << county_tax << "%" << endl;


    cout << boolalpha;     // if you want to print booleans like strings
    bool b = true;
    cout << "boolean: " << b << endl;

    return 0;
}
