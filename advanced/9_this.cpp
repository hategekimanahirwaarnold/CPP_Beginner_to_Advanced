#include <iostream>
#include <string_view>

/**
 * `this` is keyword which is pointer whose address is where our
 * object is created.
 * 
*/

using namespace std;
class Dog{
    public: 
        Dog() = default;
        Dog(string_view name_p, string_view breed, int age_param);
        // chain using pointer
        /*
        Dog* set_dog_name(string_view name) {
            this->name = name;
            return this;
        }
        Dog* set_dog_breed(string_view breed) {
            this->breed = breed;
            return this;
        }
        Dog* set_dog_age(int p_age) {
            *(this->p_age) = p_age;
            return this;
        }a */

        // chain using dereferencing this pointer
        Dog& set_dog_name(string_view name) {
            this->name = name;
            return *this;
        }
        Dog& set_dog_breed(string_view breed) {
            this->breed = breed;
            return *this;
        }
        Dog& set_dog_age(int p_age) {
            *(this->p_age) = p_age;
            return *this;
        }
        void print_info() {
            cout << "name: " << this->name << endl;
            cout << "breed: " << this->breed << endl;
            cout << "age: " << *(this->p_age) << endl;
        }
        ~Dog();
    
    private:
        string name;
        string breed;
        int * p_age{nullptr};
};

Dog::Dog(string_view name_p, string_view breed, int age_param) {
    this->name = name_p;
    this->breed = breed;
    p_age = new int;
    *p_age = age_param;
    cout << "Dog constructor called for " << name << " at: " << this << endl;
}

Dog::~Dog() {
    delete p_age;
    cout << "Dog destructor called for " << name  << " at: " << this << endl;
}

int main() {
    Dog dog1("Dogy1", "shep", 1);
    dog1.print_info();
    dog1.set_dog_name("mubby").set_dog_breed("brd").set_dog_age(21);
    dog1.print_info();
    cout << "Done" << endl;
    // destructor is called
    return 0;
}
