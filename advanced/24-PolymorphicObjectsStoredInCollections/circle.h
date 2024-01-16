#ifndef CIRCLE_H
#define CIRCLE_H
#include "oval.h"

class Circle : public Oval
{
public:
    Circle() = default;
    Circle(double radius, string_view description);
    ~Circle();

    virtual void draw() const{
        cout << "Circle::draw() called. Drawing " << m_description <<
        " with radius : " << get_x_rad() << endl;

    };

};

#endif
