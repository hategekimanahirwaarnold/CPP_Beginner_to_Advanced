#include <iostream>

using namespace std;

int main()
{
    int nbr1 = 75;
    int nbr2 = 65;

    if (nbr1 > nbr2) {
        cout << "nbr1 is greater" << endl;
    }  else {
        cout << "nbr2 is greater" << endl;
    }

    const int pen = 10;
    const int marker = 20;
    const int eraser = 30;
    const int circle = 40;

    int tool = eraser;

    if (tool == pen) {
        cout << "The tool is pen\n";
    } else if (tool == marker) {
        cout << "The tool is marker\n";
    } else if (tool == eraser) {
        cout << "The tool is eraser\n";
    } else if (tool == circle) {
        cout << "The tool is circle\n";
    }
    cout << flush;
    // switch cases
    tool = circle;

    switch (tool)
    {
    case pen : {
        cout << "The tool is pen\n";
    }
        break;
    case marker: {
        cout << "The tool is marker\n";
    }
        break;
    case eraser: {
        cout << "The tool is eraser\n";
    }
        break;
    case circle:
        cout << "The tool is circle\n";
        break;
    default:
        break;
    }

    // group cases
    tool = marker;

    switch (tool) // condition must be an integral type expression
    {
    case pen :
    case marker:
    case eraser: {
        cout << "The first 3 tools\n";
    }
        break;
    case circle:
        cout << "The last tool\n";
        break;
    default:
        cout << "Not found!\n";
        break;
    }
    int a = 39;
    int b = 5;

    char max = a > b ? 'a' : 'b'; // both options ('a', and 'b') should be of the same type or atleast one should be implicitly converted by the compiler

    cout << "The maximum is " << max << endl;
    // ternary operator

    return 0;
}
