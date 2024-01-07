#include <iostream>

using namespace std;

int main()
{
    /**
     * arrays store elements of the same type
     * scores[5] = {1, 2, 3} => declare some values you know
     * scores[5] => declare array with garbage values
     * scores[] = {1, 2, 3, 4, 5} => declare without size_array and compile will compute size_array immediately
    */
    int scores[10];
    int size_array = 10;
    for (size_t i = 0; i < size_array; i++)
    {
        scores[i] = i * 2;
        cout << i << " : " << scores[i] << '\n';
    }
    cout << "--------------------------------\n";
    int scores2[5] = {1, 2, 3};
    size_array = 5;
    for (size_t i = 0; i < size_array; i++)
    {
        cout << i << " : " << scores2[i] << '\n';
    }
    cout << "--------------------------------\n";
    int scores3[] = {1, 2, 3, 4, 5, 6};
    // range based for loops are in newer version of C++ / g++ / gcc
    // size_array = size(scores3);
    // for (int value : scores3)
    // {
    //     cout << value << '\n';
    // }
    size_array = sizeof(scores3) / sizeof(scores3[0]);
    for (int i = 0; i < size_array; i++)
    {
        cout << scores3[i] << '\n';
    }
    
    char message1[] = "Hello! Hirwa Arnold";
    cout << message1 << endl;

    char message[6] = {'H', 'e', 'l', 'l', 'o'}; // compiler ands new character if your array is less than its actual size
    cout << message << endl;

    // string literals - the compiler will cut the strings into chars
    char message2[] = {"Hi There"}; // or use message2[] {"Hi There"} for newer versions of compilers
    cout << message2 << endl;

    /**
     * N.B : you can only print directly an array of characters (not numbers)
    */
    return 0;
}
