#include <iostream>
#include <concepts>

using namespace std;

// nested requirement
template <typename T>
concept TinyType = requires (T t) {
    // sizeof(T) < 4; // simple requirement which only enforce syntax
    requires sizeof(T) <= 4; // this one requires the statement to be true in addition to the syntax.
};

// compound requirement
template <typename T>
concept Addable = requires (T a, T b) {
    {a + b} -> convertible_to<int>; // compound requirement
    // checks if a + b is valid syntax, doesn't throw exceptions(optional), and
    // the result is convertible to int(optional)
};

Addable auto add (Addable auto a, Addable auto b) {
    return a + b;
};

// force variables to be integral types
integral auto add_2(integral auto a, integral auto b)
{
    return a + b;
}

int main()
{
    char x = 67;
    char y = 56;
    /* 
    constraint of new varaibles by concepts
    std::floating_point auto  x = 12.3;
    */
    auto result = add(x, y);
    cout << "result: " << result << endl;
    cout << "sizeof result: " << sizeof(result) << endl;
    return 0;
}
