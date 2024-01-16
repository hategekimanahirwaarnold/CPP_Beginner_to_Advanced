#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
#include <string_view>

using namespace std;

class Shape
{
public:
    Shape();
    Shape(string_view description);
    virtual ~Shape();
    void draw() const{
        cout << "Shape::draw() called for : " << m_description << endl;
    }

    virtual int get_count() const{
        return m_count;
    }
    static int m_count;
protected:
    string m_description;

};

#endif //SHAPE_H
