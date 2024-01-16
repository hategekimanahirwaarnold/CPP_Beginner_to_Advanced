#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>
#include <iostream>

using namespace std;

class Shape
{
public:
    Shape() = default;
    Shape(string_view description);
    ~Shape();

    virtual void draw() const{
        cout << "Shape::draw() called. Drawing " << m_description << endl;
    }
    virtual void draw(int color_depth) const{
        cout << "Shape::Drawing with color depth : " << color_depth << endl;
    }
       
protected :
    string m_description{""};
};

#endif
