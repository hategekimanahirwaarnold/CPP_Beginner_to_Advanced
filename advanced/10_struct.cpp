#include <iostream>
using namespace std;

/**
 * the difference between struct and classes,
 * structs are going to have public variables by default
 * while classes have private variables by default.
*/

class Dog {
    string m_name;
};

struct Cat {
    string m_name;
};

struct Point {
    double x;
    double y;
};

void print_point(Point p) {
    cout << "x: " << p.x << " y: " << p.y << endl;
}
int main() {
    Dog dog1;
    Cat cat1;
    Point point1;

    // dog1.m_name = "fluffy"; // this will throw compiler error
    cat1.m_name = "catty";
    cout << "cat's name: " << cat1.m_name << endl;
    point1.x = 12;
    point1.y = 32;
    print_point(point1);
    return 0;
}
