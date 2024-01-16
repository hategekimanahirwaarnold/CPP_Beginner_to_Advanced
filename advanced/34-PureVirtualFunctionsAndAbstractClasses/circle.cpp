#include "circle.h"

Circle:: Circle(double radius, string_view description)
        :Shape(description) , m_radius(radius)
{
}

Circle::~Circle()
{
}
