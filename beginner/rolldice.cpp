#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    double number = rand() % 6 + 1;
    double second = rand() % 6 + 1;

    cout << "You first rolled number: " << number << "second: " << second << endl;

    return 0;
}
