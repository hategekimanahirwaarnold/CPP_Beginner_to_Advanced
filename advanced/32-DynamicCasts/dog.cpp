#include "dog.h"

Dog::Dog(string_view fur_style, string_view description)
    : Feline(fur_style, description)
{
}

Dog::~Dog()
{
    cout << "Dog destructor called : woof!" << endl;
}
