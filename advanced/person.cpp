#include "person.h"

Person::Person() {
}

Person::Person(string& first_name_param, string& last_name_param)
    : first_name(first_name_param), last_name(last_name_param)
{
}

ostream& operator<<(ostream& out, const Person& person) {
    out << "Person [" << person.first_name << " " << person.last_name << "]";
    return out;
}

Person::~Person()
{
}
