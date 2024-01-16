#include "crow.h"

Crow::Crow(string_view wing_color, string_view description)
    : Bird(wing_color, description)
{
}

Crow::~Crow()
{
}
