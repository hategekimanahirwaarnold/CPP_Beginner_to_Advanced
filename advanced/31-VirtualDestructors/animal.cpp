#include "animal.h"

Animal::Animal(string_view description)
    : m_description(description)
{
}

Animal::~Animal()
{
    cout << "Animal destructor called!" << endl;
}
