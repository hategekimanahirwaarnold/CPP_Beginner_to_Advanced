#include <iostream>

using namespace std;

int max(int a, int b); // function declaration, also known as prototype
void enter_bar(size_t age);
int say_age(int& age);
int sum (int a, int b);
string add_strings(string str1, string str2);

int main() {
    int age = 23;
    enter_bar(20);
    enter_bar(12);
    cout << "the biggest number between 12 and 34 is " <<  max(12, 34) << endl;
    say_age(age); // the reference will alter the age variable
                  // passing the address of the variable is better since it reduces the number of copies on our memory
                  // hence increasing memory efficiency
    cout << "current age after say_age: " << age << endl;
    cout << "------------------------------\n";
    int result = sum(12, 23);
    cout << "address of returned value from sum: " << &result << endl;
    string str1 = "hirwa ";
    string str2 = "arnold";

    string resultstr = add_strings(str1, str2);
    // the take away is that sometimes functions return values without
    // while on the other hand compiler may do some optimization and return the address of return value
    cout << "address of returned value from result: " << &resultstr << endl;
    return 0;
}
// function definition
int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

// using reference has advantage over using pointers since you don't have to dereference.
int say_age(int& age) {
    ++age;
    cout << "Hello, you are " << age << " years old!" << endl;
    return age;
}
int sum (int a, int b) {
    int result = a + b;
    cout << "address of result in sum function: " << &result << endl;
    return result;
}
void enter_bar(size_t age) {
    if (age > 18) {
        cout << "You are " << age << " years old. You are old enough. Welcome to the bar!\n";
    } else {
        cout << "You are " << age << " years old. Sorry, you are too young to enter the bar!\n";
    }
}

string add_strings(string str1, string str2)
{
    string result = str1 + str2;
    cout << "address of result in add_string: " << &result << endl;
    return result;
}