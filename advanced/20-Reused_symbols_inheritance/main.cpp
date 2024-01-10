#include "child.h"

int main() {
    // Parent p1;
    // p1.print_var();
    Child child(33);
    child.print_var(); // calls method in child
    child.Parent::print_var(); // calls method in parent

    cout << "------------------\n";
    child.show_values();
    return 0;
}