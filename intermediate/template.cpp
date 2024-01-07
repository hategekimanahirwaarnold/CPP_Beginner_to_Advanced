/**
 * template allows us to avoid repetitions
 * inside the body of functions.
 * They are not a real C++ code though. The compiler
 * generates real C++ code by looking at arguments you called
 * your function template with.
*/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// templates also copy values not addresses.
template <typename T>
T maximum(T a, T b){
    return (a > b)? a : b;
};
 /**
 * 1. you may change the type of variables, but note that in one function,
 * the variables will be of one type because the template uses 'T' in all places of variables.
 * 
*/
// if you want to change the variables of the function use references instead.
// e.g:
template <typename T>
T _max(T &a, T &b) { // N.B: you shouldn't create a template with the same name as maximum.
    return (a > b)? a : b;
};
/* 
 * template specialization
 * if the current template is not suitable for our variables.
 * a special function for those variables will be called using a template specialization
 * as shown below; the function is comparing strings instead of integers.
*/
template < >
const char * maximum(const char * a, const char * b) {
    cout << "********special template *********\n";
    if (strcmp(a, b) > 0) {
        return a;
    } else {
        return b;
    }
}
int main()
{
    int x = 5;
    int y = 7;
    double a = 23.33;
    double b = 1.23;
    int result = maximum(x, y);
    cout << "result: " << result << endl;
    // explicit conversion
    double res = maximum<double>(a, b); // here we are forcing the compiler to use double type
    cout << "double res: " << res << endl;
    double res1 = maximum<double>(a, x); // here we are forcing the compiler to use double type. so no errors, though we are using distinct types.
    cout << "many type res: " << res1 << endl;
    const char * str1 = "hirwa";
    const char * str2 = "arnold";
    const char * res_string = maximum(str1, str2);
    cout << "The string that comes last is: " << res_string << endl;
    return 0;
}

/**
 * template instances won't always do what you want. A good
 * example is when you call our maximum function with pointers. Disaster!
*/
