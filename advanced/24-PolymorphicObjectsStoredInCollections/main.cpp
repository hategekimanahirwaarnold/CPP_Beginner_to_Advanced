#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"
int main()
{
    Circle c1(3.3, "Circle1");
    Oval o1(12.3, 1.2, "Oval1");
    Circle c2(11.2, "circle2");
    Oval o2(311.2, 2.2, "Oval2");
    Circle c3(22.2, "circle3");
    Oval o3(31.8, 9.3, "Oval3");

    cout << "sizeof (circle1 ) : " << sizeof(c1) << endl;
    /**
    Shape shape1[] {c1, o1, c2, o2, c3, o3}; // array will only store shape information (slicing)

    for (Shape& s : shape1){
        cout << "sizeof (object) : " << sizeof(s) << endl;
        s.draw(); // here you will call only Shape's method (it was sliced in the array)
    }
    */
    // what if we store references? => you can have array of references
    // const Shape& shape2[] {c1, o1, c2, o2, c3, o3}; // error: references are not left assignable

    // Raw pointers => this will work i.e: it is polymorphism
    /**
    Shape* shape2[] {&c1, &o1, &c2, &o2, &c3, &o3}; // array will only store shape information (slicing)

    for (Shape * s : shape2){
        cout << "sizeof (object) : " << sizeof(s) << endl;
        s->draw(); // we will get the specific draw method of each type of shape
    }
    */

    // smart pointers also will work out like Raw pointers
    shared_ptr<Shape> shape3[] {make_shared<Circle>(12.2, "Circle4"),
                    make_shared<Oval>(10.0, 20.0, "Oval4")};

    for (auto& s : shape3) {
        s->draw();
    }

    return 0;
}
