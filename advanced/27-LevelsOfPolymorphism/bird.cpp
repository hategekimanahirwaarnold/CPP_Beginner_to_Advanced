#include "bird.h"

Bird::Bird(string_view wing_color, string_view description)
    : Animal(description) , m_wing_color(wing_color)
{
}

Bird::~Bird()
{
}
