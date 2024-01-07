#include <iostream>
using namespace std;

/**
 * the size of objects depends on the variables within the class
 * 
*/
/**
 * boundary alignment:
 * -------------------
 * an int is strored in a memory location which is a multiple of 4,
 * because of this concept, there may be gaps between occupied memories.
*/
class Dog {
    public:
        Dog() = default;
    private:
        size_t leg_count;
        size_t arm_count;
        int * p_age;
};

int main() {
    Dog dog1;
    cout << "sizeof(size_t): " << sizeof(size_t) << endl;
    cout << "sizeof(int *): " << sizeof(int *) << endl;
    cout << "sizeof(Dog): " << sizeof(Dog) << endl;

    string name{"Here I am the king of codes! Really?"};
    /**
     * the following may blow your mind since the size of name won't change 
     * no matter how many characters in it.
     * this is because the `string` may be an object and `sizeof` function will
     * only count the size of variables (pointer to characters ...) but not the 
     * size of the real characters.
    */
    cout << "sizeof(name): " << sizeof(name) << endl;
    return 0;
}
