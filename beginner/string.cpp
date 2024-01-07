#include <iostream>

using namespace std;

int main()
{
    // string name;
    // int age;

    // cout << "Hello, may you tell me your name?\n";
    // cin >> name;
    // cout << "Hi " << name << " let me know your age please.\n";
    // cin >> age;

    // cout << "Thank you for telling me that you are " << age << " years old " << name << ".\n";

    /** Grab data with spaces*/
    /** use cin.igonre() to ignore the remaining newline in the buffer after printing number. */
    cin.ignore();
    string full_name;
    int age2;

    cout << "May you tell me your name please?\n";
    getline(std::cin, full_name);

    cout << "May you tell me your age " << full_name << " ?\n";
    std::cin >> age2;

    cout << "Thank you for telling me that you are " << age2 << " years old " << full_name << ".\n";
    return 0;
}