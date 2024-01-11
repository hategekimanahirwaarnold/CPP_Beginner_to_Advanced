#include "circle.h"

Circle:: Circle(double radius, string_view description)
        : Oval(radius , radius, description)
{
}
Circle::~Circle()
{
}
