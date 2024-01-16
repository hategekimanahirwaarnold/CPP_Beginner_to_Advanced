#include "pigeon.h"

Pigeon::Pigeon(string_view wing_color, string_view description)
    : Bird(wing_color, description)
{
}

Pigeon::~Pigeon()
{
}
