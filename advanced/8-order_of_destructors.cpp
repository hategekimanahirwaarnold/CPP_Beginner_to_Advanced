#include <iostream>
#include <string_view>

using namespace std;
class Dog{
    public: 
        Dog() = default;
        Dog(string_view name_p, string_view breed, int age_param);
        ~Dog();
    
    private:
        string name;
        string breed;
        int * p_age{nullptr};
};

Dog::Dog(string_view name_p, string_view breed, int age_param) {
    name = name_p;
    breed = breed;
    p_age = new int;
    *p_age = age_param;
    cout << "Dog constructor called for " << name << endl;
}

Dog::~Dog() {
    delete p_age;
    cout << "Dog destructor called for " << name << endl;
}

void some_func() {
    Dog my_dog("ffy", "hsd", 3);
    // destructor will be called after this function scope
}

void func2(Dog dog_param) {
    // this will create a copy of class and destructor will
    // be called twice which is not good.
}

void func3() {
    Dog * my_dog = new Dog("ffy", "hsd", 3);
    // delete the pointer to call destructor
    delete my_dog;
}

int main() {
    Dog dog1("Dogy1", "shep", 1);
    Dog dog2("Dogy2", "shep", 2);
    Dog dog3("Dogy3", "shep", 3);
    Dog dog4("Dogy4", "shep", 4);
    cout << "Done" << endl;
    return 0;
}
/**
 * The reason why destructors are called in stack format (last in first out),
 * is because they are higher chances that older objects depends on earlier objects.
 * Hence, earlier objects are destroyed last.
*/
