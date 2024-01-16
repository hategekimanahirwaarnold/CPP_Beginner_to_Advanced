#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
#include <string_view>

using namespace std;

class Shape
{
protected:
    Shape() = default;
    Shape(string_view description);
public:
    virtual ~Shape() = default;

    //Pure virtual functions (they don't have implementation here)
    //Because of this, this is class becomes pure abastract class.
    virtual double perimeter() const = 0;
    virtual double surface() const = 0;
private:
    string m_description;
};

#endif //SHAPE_H
