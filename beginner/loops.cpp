#include <iostream>

using namespace std;

int main()
{
    size_t count = 10;
    for (size_t i = 0; i < count; i++)
    {
        cout << i << " : Love coding\n";
    }

    size_t j = 0;
    while (j < count)
    {
        cout << j << " : Love C++\n";
        j++;
    }

    j = 0;
    do {
        cout << j << " : Love programming\n";
        j++;
    } while (j < count);
    return 0;
}
