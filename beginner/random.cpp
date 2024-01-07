#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int number = rand();

    cout << "random number: " << number << endl; // not random always

    // we need to seed a random number generator
    srand(3);
    number = rand();
    cout << "random number: " << number << endl; // every time number is the same when value from srand(value) is not change
    // another approach
    long elapsedSeconde = time(nullptr); // Jan 1 1970 = time elapsed starting from the shown date
    srand(elapsedSeconde);
    number = rand();

    cout << "elapsed number: " << number << endl; // every time we run function number is changed

    // the number was too large let's specify upper limit
    number = rand() % 10; // from 0 to 9
    cout << "short random number: " << number << endl;
    return 0;
}