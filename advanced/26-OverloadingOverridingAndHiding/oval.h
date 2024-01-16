#ifndef OVAL_H
#define OVAL_H
#include "shape.h"
class Oval : public Shape
{
public:
    Oval()=default;
    Oval(double x_radius, double y_radius,
            string_view description);
    ~Oval();
    // here we use override to force compiler to spot typo when using virtual functions
    
    virtual void draw() const override{
        cout << "Oval::draw() called. Drawing " << m_description <<
            " with m_x_radius : " << m_x_radius << " and m_y_radius : "
            << m_y_radius << endl;
    }
    // this won't be known by polymorphism since it doesn't belong to the base class (Shape)
    virtual void draw(int color_depth, string_view color) const{
        cout << "Drawing with color depth : " << color_depth
        << " and color : " << color << endl;
    }

public : 
    double get_x_rad() const{
        return m_x_radius;
    }
    double get_y_rad() const{
        return m_y_radius;
    }

private :
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};

#endif
