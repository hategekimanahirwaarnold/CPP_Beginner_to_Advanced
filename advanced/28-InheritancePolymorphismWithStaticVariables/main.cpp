#include "ellipse.h"

int main(){
    // Shape
    Shape shape1("shape1");
    cout << "shape count : " << Shape::m_count << endl; // 1

    Shape shape2("shape2");
    cout << "shape count : " << Shape::m_count << endl; // 2

    Shape shape3("shape3");
    cout << "shape count : " << Shape::m_count << endl; // 3

    cout << "**********************************************\n";

    //Ellipse
    Ellipse ellipse1(10,12,"ellipse1");
    cout << "shape count : " << Shape::m_count << endl; // 4
    cout << "ellipse count : " << Ellipse::m_count << endl; // 1

    cout << "\n********************************************\n";
    //shape polymorphism
    Shape*  shapes[] {&shape1, &ellipse1};
    for(auto &s : shapes) {
        cout << "count : " << s->get_count() << endl;
    }

    return 0;
}