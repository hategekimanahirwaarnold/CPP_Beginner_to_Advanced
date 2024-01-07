#include <iostream>

/**
 * all pointers are of the same size
*/

using namespace std;

int main()
{
    int *p = nullptr;
    int data = 34;
    p = &data;
    // all pointers are of the same size = 8 bytes
    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of double: " << sizeof(double) << endl;
    cout << "size of double*: " << sizeof(double*) << endl;
    cout << "size of int*:  " << sizeof(int*) << endl;
    cout << "size of *p: " << sizeof(p) << endl;
    

    //dereferencing
    cout << "value of data through p: " << *p << endl;
    /**
     * character pointers:
     * char *p = "message" --> you can't change the character value in string; like p[0] = b;
     *          To avoid the above message, use const char *p instead; like this: const char *p = "message"
     * 
    */

    const char *message = "Hello There!";
    cout << "message: " << message << endl;
    // you can get the first char using deferencing
    cout << "*message: " << message << endl;

    // if you want to change characters of the string use `char p[] = "message" `
    char mess[] = "Hello There";
    *mess = 'B';
    cout << "mess: " << mess << endl; // it will print Bello there.
    /**
     * it is better to check pointer if it is null after initialization
    */
    int *p1 {};
    p1 = new int(8);
    if (p1 == nullptr)
    {
        cout << "pointer is invalid." << endl;
    } else
    {
        cout << "pointer is valid." << endl;
    }

    delete p1; // this won't cause errors if p1 is nullptr
    return 0;
}
