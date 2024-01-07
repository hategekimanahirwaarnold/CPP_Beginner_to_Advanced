#include <iostream>
#include <type_traits>
#include <concepts>
using namespace std;
/**
 * the following is the syntax of creating your own
 * concept.
*/
template <typename T>
concept MyIntegral = is_integral_v<T>;


// // syntax 1
// template <typename T>
// requires MyIntegral<T>
// T add (T a, T b) {
//     return a + b;
// }
// // syntax 2
// template <MyIntegral T>
// T add(T a, Tb) {
//     return a + b;
// }
// syntax 3
// template <typename T>
// T add(T a, T b) requires MyIntegral<T> {
//     return a + b;
// }
// syntax 4
// MyIntegral auto add(MyIntegral auto a, MyIntegral auto b) {
//     return a + b;
// }

// syntax 5:
template <typename T>
concept Multipliable = requires(T a, T b) {
    a * b; // check the this condition and make sure syntax is valid.
};

template <typename T>
concept Incrementable = requires(T a) {
    a+= 1; // check the this condition and make sure syntax is valid.
    ++a; // it doesn't check the value you get.
    a++;
};

// template <typename T>
// requires Multipliable<T>
// T add(T a, T b) {
//     return a + b;
// };

template <typename T>
requires Incrementable<T>
T add(T a, T b) {
    return a + b;
};




int main() {
    double x = 6;
    double y = 7;

    auto result = add(x, y);
    cout << "result : " << result << endl;
    return 0;
}