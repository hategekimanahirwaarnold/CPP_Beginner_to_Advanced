#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{
    Shape * shape_ptr = new Circle(10, "circle1");
    // shape_ptr->draw(45, "Red"); // this will throw an error since the method
                                // doesn't belong to the Shape class
    shape_ptr->draw(3); // this will work

    return 0;
}
