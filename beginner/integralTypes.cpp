#include <iostream>

using namespace std;
/**
 * Integral types = variables whose size is less than 4
 * 
 * The main idea behind this is that
 * you can't perform mathematical operations on
 * an integral type variables. Whenever you do so,
 * the compiler will automatically change the type of variable to int
*/
int main()
{
    short int var1 = 10;
    short int var2 = 20;
    int normal = 30;
    char var3 = 'a';
    char var4 = 'b';

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;
    cout << "size of result: " << sizeof(result1) << endl; // this will be 4
    cout << "size of result2: " << sizeof(result2) << endl; // this is 4 as always

    return 0;
}