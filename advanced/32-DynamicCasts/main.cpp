#include "dog.h"
/**
 * Dynamic casting refers to accessing a non virtual method of
 * derived class from a base class.
 * 
 * NOTICE:
 * ------
 * Doing a lot of dynamic casts is sign that you made a bad design,
 * since you can use polymorphism to call specialized methods.
*/
void do_with_animal_ptr(Animal * animal) {
    cout << "In function taking base pointer..." << endl;
    Feline* feline_ptr = dynamic_cast<Feline*>(animal);

    if(feline_ptr){
        feline_ptr->do_some_feline_thingy();
    } else{
        cout << "Couldn't cast to Feline pointer, Sorry." << endl;
    }
}
void do_with_animal_ref(Animal & animal) {
    cout << "In function taking base reference..." << endl;
    Feline* feline_ptr1 = dynamic_cast<Feline*>(&animal);

    if(feline_ptr1){
        feline_ptr1->do_some_feline_thingy();
    } else{
        cout << "Couldn't cast animal to Feline reference, Sorry." << endl;
    }
}



int main(){
    //Base class pointer
    Animal * animal_p = new Feline("stripes", "feline1");
    // animal_p->do_some_feline_thingy(); // without dynamic casting, this will throw a compiler error

    cout << "--------------------------\n";
    /**
     * If the cast succeeds, we get a valid pointer back,
     * If it fails, we get nullptr. So we can check before
     * calling stuffs from the returned pointer.
    */
    Feline* feline_p = dynamic_cast<Feline*>(animal_p);
    
    if (feline_p) {
        feline_p->do_some_feline_thingy(); 
    } else {
        cout << "Couldn't do transformation from animal to dog" << endl;
    }

    cout << "--------------------------\n";

    //Can do the transformation downstream from references

    //Base class reference
    Feline feline2("stripes", "feline2");
    Animal & animal_ref = feline2;

    // calling non virtual methods on animal_ref won't work
    // animal_ref.do_some_feline_thingy(); // this will cause errors

/**
 *   Dog & feline_ref {dynamic_cast<Dog&>(animal_ref)};
    feline_ref.do_some_feline_thingy(); better to check first since it may fail as you can see.
*/
    //Doing proper checks with references

    cout << "--------------------------\n";

    Feline* feline_p2{dynamic_cast<Feline*>(&animal_ref)};
    if(feline_p2){
        feline_p2->do_some_feline_thingy();
    } else {
        cout << "Couldn't do transformation from feline!" << endl;
    }

    cout << "--------------------------\n";
    do_with_animal_ptr(animal_p);
    do_with_animal_ref(animal_ref);

    cout << "--------------------------\n";

    // You can not transform an int to string through dynamic casting
    int data{45};
    int *data_ptr = &data; 

/** This will cause compiler error:
    string data_str = dynamic_cast<string>(data);
    string data_str_ptr = dynamic_cast<string *>(data_ptr);
*/
    cout << "Done" << endl;

    cout << "--------------------------\n";

    delete animal_p;

    return 0;
};
