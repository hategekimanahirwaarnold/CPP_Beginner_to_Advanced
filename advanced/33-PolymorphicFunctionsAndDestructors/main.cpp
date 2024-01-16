/**
 * Don't call specialized /polymorphic functions in destructors
 * or constructors, because you may call them when their corresponding
 * derived classes haven't yet been set up, hence causing errors.
*/
/**
 * To avoid that problem, it is better to call polymorphic functions in the `main` code
 * instead of calling them in the constructors or destructors.
*/

#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base constructor called" << endl;
        // this->setup(); //static binding kicks in here
    }
    virtual ~Base()
    {
        cout << "Base destructor called" << endl;
        // this->clean_up(); we won't get polymorphic behaviour
    }
    virtual void setup()
    {
        cout << "Base::setup() called" << endl;
        m_value = 10;
    }
    virtual void clean_up()
    {
        cout << "Base::clean_up() called" << endl;
    }
    int get_value()
    {
        return m_value;
    }
protected:
    int m_value;
};
 
class Derived : public Base
{
public:
    Derived()
        : Base()
    {
        cout << "Derived constructor called" << endl;
    }
    virtual ~Derived()
    {
        cout << "Derived destructor called" << endl;
    }
    virtual void setup() override
    {
        cout << "Derived::setup() called" << endl;
        m_value = 100;
    }
    virtual void clean_up() override
    {
        cout << "Derived::clean_up() called" << endl;
    }
};

int main()
{
    Base * p_base = new Derived;
    p_base->setup(); // this is a good design

    auto value = p_base->get_value();

    cout << "value: " << value << endl;  // 10

    p_base->clean_up();
    delete p_base;

    return 0;
}
