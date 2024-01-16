/**
 * -An abstract class with only pure virtual functions and no member variable
 * can be used to model what is called an interface in Object Oriented Programming.
 * -An interface is a specification of something that will be fully implemented in a
 * derived class, but the specification itself resides in the abstract class.
*/
#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"

// here we attach `StreamInsertable` interface on our class to enable it to print some stuffs.
class Point : public StreamInsertable{
public:
    Point() = default;
    Point(double x, double y)
        : m_x(x), m_y(y)
    {
    }
    virtual void stream_insert(ostream& out) const override{
        out << "Point [x: " << m_x << " ,y: " << m_y << "]";
    }
private :
    double m_x;
    double m_y;
};

int main(){
    Point p1(10, 20); // This will cause compiler errors in the absence of stream_insert method
                    // because the class will be an abstract class if it doesn't override all pure virtual functions from the base class
    cout << "p1 : " << p1 << endl;

    cout << "------------------------------\n";
    operator << (cout, p1) << endl;

    cout << "----------------------------\n";
    unique_ptr<Animal> animal0 = make_unique<Dog>("stripes", "dog1");
    cout << *animal0 << endl;

    cout << "----------------------------\n";
    unique_ptr<Animal> animal1 = make_unique<Bird>("white", "bird1");
    cout << *animal1 << endl;
 
    cout << "----------------------------\n";
    // Can even put animals in an array and print them polymorphically
    shared_ptr<Animal> animals[] {
        make_shared<Dog>("stripes", "dog2"),
        make_shared<Cat>("black stripes", "cat2"),
        make_shared<Crow>("black wings", "crow2"),
        make_shared<Pigeon>("white wings", "pigeon2")
    };
    cout << endl;
    cout << "Printing out animals array : " << endl;
    for (const auto& a : animals) {
        cout << *a << endl;
    }

    return 0;
}