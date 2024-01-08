#include <iostream>
#include "player.h"

int main() {
    Player p1("Basketball");
    p1.set_first_name("hirwa");
    p1.set_last_name("arnold");
    cout << "player : " << p1 << endl;

    return 0;
}
