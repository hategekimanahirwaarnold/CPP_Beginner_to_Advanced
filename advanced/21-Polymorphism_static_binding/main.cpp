#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
void draw_circle(const Circle& circle){
    circle.draw();
}
void draw_oval(const Oval& oval) {
    oval.draw();
}

/**
 * Polymorphism:
 * -------------
 * Managing derived objects in memory through base pointers or
 * references and getting the right method called on the base pointer or reference.
*/
/**
 * Static Binding with inheritance:
 * --------------------------------
 * The compiler will look the type of pointer and call a method of that class
*/
int main()
{
    Shape shape1("Shape1");
    // shape1.draw();

    Oval oval1(2.0, 3.5, "Oval1");
    // oval1.draw();

    Circle circle1(3.3, "Circle1");
    // circle1.draw();
/**
 * Here we observe that the draw method being called is for Shape because we are
 *  using a Shape pointer.
 * However, we also have draw methods from derived classes (Oval and Circle) which are more efficient!
*/
    // Base pointers

    Shape * shape_ptr = &shape1;
    // shape_ptr->draw();
    shape_ptr = &oval1;
    // shape_ptr->draw();

    shape_ptr = &circle1;
    // shape_ptr->draw();

    // Base references
    Shape& shape_ref = shape1;
    // shape_ref.draw();

    // draw by shapes (this is also a bad design since you would need many functions to deal with each shape)

    draw_circle(circle1);
    draw_oval(oval1);

    // shapes stored in collections
    // More arrays as you have more shape types. Imagine if we had 100 types of shapes? Messy!
    Circle circle_collection[]{circle1, Circle(10, "c2"), Circle(20, "c3")};
    Oval oval_collection[]{oval1, Oval(22.3, 51.1, "Oval2")};

    return 0;
}
