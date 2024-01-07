/**
 * overload referes to using the same function name
 * but make them different through using different types of parameters.
 * the functions may be different based on types of parameters and number of parameters.
 * see the example below.
*/
#include <iostream>
using namespace std;

int sum(int a , int b)
{
    cout << "function with int is called.\n";
    return a + b;
}

double sum (double a, double b)
{
    cout << "function with double is called.\n";
    return a + b;
}

using namespace std;

int main()
{
    int a = 12;
    int b = 13;
    double x = 12;
    double y = 13;

    cout << "result of first sum: " << sum(a, b) << endl;
    cout << "result of second sum: " << sum(x, y) << endl;
    return 0;
}
