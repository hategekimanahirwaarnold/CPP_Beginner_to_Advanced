#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"

int main(){
    // Animal polymorphism
    Dog dog1("dark gray", "dog1");
    Cat cat1("black stripes", "cat1");
    Pigeon pigeon1("white", "pigeon1");
    Crow crow1("black", "crow1");

    Animal* animals[]{&dog1, &cat1, &pigeon1, &crow1};

    for(const auto& animal : animals){
        animal->breathe();
    }

    cout << "\n----------------------------\n";
    // Feline polymorphism
    Dog dog2("dark gray", "dog2");
    Cat cat2("black stripes", "cat2");
    Pigeon pigeon2("white", "pigeon2"); //Putting pigeon in felines will result in compiler error
                                        //pigeon is an animal, but not a feline
    
    Feline* felines[] {&dog2, &cat2, /**pigeon2*/};

    for (const auto& feline : felines){
        feline->run();
    }
    
    cout << "\n-------------------------------\n";
    //Bird polymorphism
    Pigeon pigeon3("white", "pigeon3");
    Crow crow3("black", "crow3");

    Bird* birds[] {&pigeon3, &crow3};

    for (const auto& bird : birds){
        bird->fly();
    }
 
    return 0;
}