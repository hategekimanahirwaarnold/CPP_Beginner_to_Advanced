#include "person1.h"

Person::Person() {
    cout << "Default constructor for person called ...." << endl;
}

Person::Person(string_view fullname, int age, 
        string_view address)
    : m_full_name{fullname}, m_age{age}, m_address{address}
{
    cout << "Custom constructor for person called ...." << endl;
}

Person::Person(const Person& source)
    : m_full_name(source.m_full_name), m_age(source.m_age), m_address(source.m_address)
{
    cout << "Custom copy constructor for person called ...." << endl;
}

ostream& operator<<(ostream& out, const Person& person) {
    out << "Person [Full name :" << person.get_full_name() <<
                    ", Age:" << person.get_age() <<
                    ", Address:" << person.get_address() << "]";
    return out;
}

Person::~Person()
{
}
