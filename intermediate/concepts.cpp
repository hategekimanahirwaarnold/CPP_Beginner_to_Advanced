/**
 * concepts force the user to use templates
 * with specific variable types
*/
#include <iostream>
#include <concepts>


using namespace std;
/**
 * First way:
template <typename T>
// requires std::integral<T> // here we are forcing the function to use only integral types
T add( T a, T b ) {
    return a + b;
}
*/

/**
 * Second way:
 * template <std::integral T>
T add( T a, T b ) {
    return a + b;
}
*/
/**
 * Third way: using auto
 * auto add (auto a, auto b) {
     return a + b;
 *  }
*/
/**
 * You can use integral concept on the third way too:
 * auto add(std::integral auto a, std::integral b) {
      return a + b;
    }
*/
// 4th way:
/**
template <typename T>
T add( T a, T b ) requires std::integral {
    return a + b;
}
*/

int main()
{
    char a_0 = 10;
    char a_1 = 20;
    auto resulta = add(a_0, a_1);
    cout << "result a : " << resulta << endl;
    int b_0 = 11;
    int b_1 = 5;
    auto resultb = add(b_0, b_1);
    cout << "result b : " << resultb << endl;
    // double c_0 = 11.9;
    // double C_1 = 12.3;
    // add(c_0, c_1);

    return 0;
}
