#include "feline.h"

Feline::Feline(string_view fur_style, string_view description)
    : Animal(description), m_fur_style(fur_style)
{
}

Feline::~Feline()
{
    cout << "Feline destructor called!" << endl;
}
