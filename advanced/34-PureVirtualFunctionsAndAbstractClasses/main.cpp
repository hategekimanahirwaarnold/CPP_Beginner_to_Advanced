#include "circle.h"
#include "rectangle.h"

int main(){
    // this will result into errors since Shape is abastract class
    // Shape * shape_ptr = new Shape;

    const Shape * shape_rect = new Rectangle(10, 10, "rect1");
    double surface = shape_rect->surface();
    cout << "dynamic type of shape_rect : " << typeid(*shape_rect).name() << endl;
    cout << "The surface of shape rect is : " << surface << endl;

    cout << "----------------------------\n";
    const Shape * shape_circle = new Circle(10, "rect1");
    surface = shape_rect->surface();
    cout << "dynamic type of shape_circle : " << typeid(*shape_circle).name() << endl;
    cout << "The surface of shape circle is : " << surface << endl;


    return 0;
}
