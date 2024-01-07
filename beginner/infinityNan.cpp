#include <iostream>

using namespace std;

int main()
{
    double nbr1 = 0;
    double nbr2 = 0;
    double nbr3 = 3;
    double result = nbr3 / nbr1;
    cout << "Infinity: " << result << endl;
    cout << "Not a number (NAN): " << nbr1 / nbr2 << endl;

    return 0;
}