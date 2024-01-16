#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape
{
public:
    Circle() = default;
    Circle(double radius, string_view description);
    virtual ~Circle();
    /** Overriding abastract classes
     * N.B : If we don't override abastract classes,
     * this class will also become abstract.
    */
    virtual double perimeter() const{
        return (2 * PI * m_radius);
    }

    virtual double surface() const {
        return PI * m_radius * m_radius;
    }
private:
    double m_radius{0.0};
    inline static double PI{3.14159265};

};

#endif // CIRCLE_H
