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

    // polymorphism with raw pointers

    Shape* shape2[] {&c1, &o1, &c2, &o2, &c3, &o3}; 

    for (Shape * s : shape2){
        cout << "sizeof (object) : " << sizeof(s) << endl;
        s->draw(); 
    }

    return 0;
}
