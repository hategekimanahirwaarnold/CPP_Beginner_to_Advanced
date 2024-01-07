#include <iostream>

using namespace std;

int main() {
    cout << "Fahrneit: \n";
    double Fahrneit;
    cin >> Fahrneit;
    double celsius = (Fahrneit - 32) / 1.8;
    cout << celsius << endl;

    return 0;
}
