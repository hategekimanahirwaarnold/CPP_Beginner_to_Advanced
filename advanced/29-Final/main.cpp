/**
 * Final keyword prevents downstream classes from 
 * overriding a method or variable
*/

#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"

//Inheriting weird fact #1
/*
class Plane final{
    Plane() = default;
};

class FigherJet : public Plane{

};
*/

int main(){
    cout << "Hi there!\n";
 
    return 0;
};
