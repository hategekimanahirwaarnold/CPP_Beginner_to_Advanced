/**
 * Lambda function signature:
 *        [capture list] (parameters) -> return type {
 *                  // function body
 *          }(arguments)
 * Note that there is a lot of information to be printed in the console.
 * you may comment out some to leave the ones you only want to deal with.
*/
#include <iostream>
using namespace std;

int main()
{
    // declare function
    auto func = []() {
        cout << "Hello World\n";
    };
    func(); // call the funtion

    // declare function that will run without calling it on the separate line.
    []() {
        cout << "Hello World\n";
    }();
    // print the sum of a + b
    [](double a, double b) {
        cout << "a + b: " << (a + b) << endl;
    }(10.0, 4.0);
    // store return value in result
    auto result = [](double a, double b) {
        return a + b;
    }(10.0, 4.0);

    cout << "result: " << result << endl;
    // store func in a variable and call the functio later
    auto func1 = [](double a, double b) {
        return a + b;
    };
    auto resutl1 = func1(122, 3); // adds 122 to 3 and store result in result1
    cout << "result1: " << resutl1 << endl;
    // specify the return type. the following func will retun an int
    auto func3 = [](double a, double b)->int{
        return a + b;
    };

    int result3 = func3(12, 32);

    /**
     * use of capture list: give you access to variables outside the scope
    */

    double a = 10;
    double b = 20;

    auto func = [a, b]() // now we can use varaibles a (10) and b (20) in our function
    {
        cout << "a + b: " << a + b << endl;
    };

    int c = 42;
    auto func4 = [c]() {
        cout << "Inner value: " << c << endl;
    };

    for (size_t i = 0; i < 5; i++)
    {
        // the variablle `c` in func4 is a copy of our original c value
        cout << "Outer value: " << c << endl;
        func4();
        c++;
    };
    // if you want to access the true reference of original variable
    // add `&` infront of the varaible in capture list.

    c = 42;
    auto func5 = [&c]() {
        cout << "Inner value: " << c << endl;
    };

    for (size_t i = 0; i < 5; i++)
    {
        // the variablle `c` in func4 is a copy of our original c value
        cout << "Outer value: " << c << endl;
        func4();
        c++;
    };
    
    // you can capture all variables outside the lambda function
    // here we are going to capture them by value
    c = 42;
    auto func5 = [=]() {
        cout << "Inner value: " << c << endl;
    };

    for (size_t i = 0; i < 5; i++)
    {
        // the variablle `c` in func4 is a copy of our original c value
        cout << "Outer value: " << c << endl;
        func4();
        c++;
    };

    // you can capture all values outside the lambda function by reference too.
    c = 42;
    auto func5 = [&]() {
        cout << "Inner value: " << c << endl;
    };

    for (size_t i = 0; i < 5; i++)
    {
        // the variablle `c` in func4 is a copy of our original c value
        cout << "Outer value: " << c << endl;
        func4();
        c++;
    };
 
    return 0;
}
