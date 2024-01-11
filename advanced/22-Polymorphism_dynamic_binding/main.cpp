#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
void draw_shape(Shape * s){
    s->draw();
};

void draw_shape_v1(const Shape& s){
    s.draw();
};
/**
 * Polymorphism:
 * -------------
 * Managing derived objects in memory through base pointers or
 * references and getting the right method called on the base pointer or reference.
*/
/**
 * Dynamic Binding with inheritance:
 * --------------------------------
 * After marking inheritated methods as virtual, now the mothod that will be
 * called will be based on the type of variable, not the type of pointer.
*/
int main()
{
    Shape shape1("Shape1");
    // shape1.draw();

    Oval oval1(2.0, 3.5, "Oval1");
    // oval1.draw();

    Circle circle1(3.3, "Circle1");
    // circle1.draw();

    // Base pointers

    Shape * shape_ptr = &shape1;
    // shape_ptr->draw(); // shape::draw

    shape_ptr = &oval1;
    // shape_ptr->draw(); // oval::draw

    shape_ptr = &circle1;
    // shape_ptr->draw();
    // shape_ptr->get_x_rad(); // this won't work since that method is not virtual

    // Base references
    // Shape& shape_ref = shape1;
    // shape_ref.draw();

    Shape& shape_ref = oval1;
    // shape_ref.draw();


    // draw by function `draw_shape`

    // draw_shape(&circle1);
    // draw_shape(&oval1);
    // draw_shape_v1(circle1);

    // shapes stored in collections
    // More arrays as you have more shape types. Imagine if we had 100 types of shapes? Messy!

    Shape * shape_collection[]{&shape1, &oval1, &circle1};
    for (Shape * shp : shape_collection) {
        shp->draw();
    };

    return 0;
}
