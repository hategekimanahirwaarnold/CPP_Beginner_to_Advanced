#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "The range for short is from " << numeric_limits<short>::min()
         << " to " << numeric_limits<short>::max() << endl;

    cout << "The range for unsigned short is from " << numeric_limits<unsigned short>::min()
         << " to " << numeric_limits<unsigned short>::max() << endl;

    cout << "The range for int is from " << numeric_limits<int>::min()
         << " to " << numeric_limits<int>::max() << endl;
 
    cout << "The range for long is from " << numeric_limits<long>::min()
         << " to " << numeric_limits<long>::max() << endl;

    cout << "The range for float is from " << numeric_limits<float>::min()
         << " to " << numeric_limits<float>::max() << endl;

    cout << "The range for double is from " << numeric_limits<double>::min()
         << " to " << numeric_limits<double>::max() << endl;
 
    return 0;
}