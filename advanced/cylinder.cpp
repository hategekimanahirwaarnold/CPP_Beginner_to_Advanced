#include "cylinder.h"

Cylinder::Cylinder(double rad, double hei) {
    base_radius = rad;
    height = hei;
}
double Cylinder::volume(){
    return PI  * base_radius * base_radius * height;
}
// getters and setters
double Cylinder::get_radius() {
    return base_radius;
}
double Cylinder::get_height() {
    return height;
}
void Cylinder::set_radius(double value) {
    base_radius = value;
}
void Cylinder::set_height(double value) {
    height = value;
}
