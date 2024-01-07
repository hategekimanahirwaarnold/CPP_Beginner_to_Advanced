/**
 * memory leaks refers to ending the program
 * before releasing all allocated memory (pointers)
*/
#include <iostream>

using namespace std;

int main()
{
    int *p = new int(3); // address 1
    p = new int(5); // stored a second address in p variable
                   // this will cause leaks since address 1 won't returned
    // another way to cause leaks
    {
        int *p2 = new int(32);
        // after this scope you won't be able to access
        // this key and release the memory.
    }
    // initialize array of pointers
    size_t size = 10;
    double *temp = new double[size] {10.0, 12.9, 32.3, 80.9, 3.0};
    /**
     * pointers initialized with dynamic arrays are different from arrays :
     * std:size doesn't work on them, and they don't support range based for loops
     * e.g of range based for loop: for ( value : rangeArray) { cout << value << endl };
    */
    // the good thing is that you can initialize an array on the heap using a constant like size in this example
    double *p_scores { new(nothrow) double[size] { 1, 2, 3, 4, 5 }};

    delete [] temp;
    temp = nullptr;

    delete [] p_scores; // this is how we release memory alocation of an array
    temp = nullptr;
    return 0;
}
