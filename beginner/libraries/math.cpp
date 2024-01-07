#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double weight = 77.7;
    // floor
    cout << "The floor is : " << floor(weight) << endl;
    // ceil
    cout << "The ceil is : " << ceil(weight) << endl;

    // round
    cout << "The round is : " << round(weight) << endl;

    // abs
    int save = -550;
    cout << "the abs value of float is: " << abs(save) << endl;
    // exp e^x
    double expo = exp(10);
    cout << "The e^10 is : " << expo << endl;
    // pow
    cout << "3 ^ 4 is : " << pow(3, 4) << endl;
    // log
    cout << "log10(1000) is " << log10(1000) << endl;
    // square root
    cout << "The square root of 81 is : " << sqrt(81) << endl;

    return 0;
}
