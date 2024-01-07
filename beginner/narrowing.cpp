#include <iostream>

using namespace std;

int main() {
    int number = 1000000;
    short another = number;

    cout << another << endl; // this will narrow down the number from 1M to 16960

    short anotherN{2}; // brace cause errors which prohibit compiler to compile;

    cout << anotherN << endl; // this will narrow down the number from 1M to 16960

    return 0;
}