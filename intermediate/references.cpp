/**
 * a reference is an alias to an existing variable
*/

// reference vs pointers
/**
 * references
 * ----------
 * 
 * differences:
 * 
 * you don't have to dereference
 * you can't change reference to something else
 * must be initialized at declaration
 * 
 * similarities:
 * 
 * a reference is like a const pointer; a pointer which point to only one address
*/
#include <iostream>

using namespace std;

int main()
{
    int int_data = 33;
    double double_data = 55;

    // references
    int& ref_int_data = int_data;
    double& ref_double_data = double_data;

    cout << "Int data: " << int_data << endl;
    cout << "Double data: " << double_data << endl;
    cout << "ref of Int data: " << ref_int_data << endl;
    cout << "ref of Double data: " << ref_double_data << endl;

    cout << "-------------------------------\n";
    int_data = 29;
    double_data = 39;

    cout << "Int data: " << int_data << endl;
    cout << "Double data: " << double_data << endl;
    cout << "ref of Int data: " << ref_int_data << endl;
    cout << "ref of Double data: " << ref_double_data << endl;

    cout << "--------------------------------\n";
    ref_double_data = 1;
    ref_int_data = 2;
 
    cout << "Int data: " << int_data << endl;
    cout << "Double data: " << double_data << endl;
    cout << "ref of Int data: " << ref_int_data << endl;
    cout << "ref of Double data: " << ref_double_data << endl;

    cout << "----------------------------------\n";
    double other_double = 23;
    ref_double_data = other_double; // here you are not changing the address of reference
                                    // you are only changing what it pionted to to other variable

 
    cout << "Double data: " << double_data << endl;
    cout << "ref of Double data: " << ref_double_data << endl;

    // constant references
    int age = 23;
    const int& ref_age = age;
    /**
    ref_age = ref_age + 1; // this will throw an error since you can't modify age through const reference.
    */

    return 0;
}