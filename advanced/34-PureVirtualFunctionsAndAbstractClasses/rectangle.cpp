#include "rectangle.h"

Rectangle:: Rectangle(double width, double height, string_view description)
        : Shape(description), m_height(height), m_width(width)
{
}
