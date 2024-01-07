#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder {
    public:
        Cylinder() = default;
        Cylinder(double rad, double hei);
        double volume();
        // getters and setters
        double get_radius();
        double get_height();
        void set_radius(double value);
        void set_height(double value);

    private:
        // member variables
        double base_radius{};
        double height{};
};

#endif
