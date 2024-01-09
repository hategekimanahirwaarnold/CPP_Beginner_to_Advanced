#include <iostream>
#include "person1.h"
#include "player2.h"
#include "nurse.h"
#include "engineer.h"
#include "civilEngineer.h"
#include "engineer1.h"
#include "civil1.h"

int main() {
    Person p1("Hirwa Hat", 21, "Kimisagara");
    cout << "person1 : " << p1 << endl;

    cout << "----------------------------" << endl;
    Player player;
    /**
     * Here we can only change the full_name of the player.
    */
    player.m_full_name = "Hategeka Arnold";

    cout << "player: " << player << endl;

    cout << "----------------------------" << endl;
    Nurse nurse;
    /**
     * Here we can't change any variable directly since they are
     * protected or private
    */
    // nurse.m_full_name = "Kanye nurse";  -> compiler error
    cout << "nurse: " << nurse << endl;

    cout << "----------------------------" << endl;
    Engineer engineer;
    /**
     * Here we can't change any variable directly since they are
     * all private
    */
    // engineer.m_full_name = "Kanye engineer";  -> compiler error
    // engineer.m_age = 55 // compiler error
    // engineer.m_address = "dfdfdfdf " // compiler error
    cout << "engineer: " << engineer << endl;

    cout << "----------------------------" << endl;
    CivilEngineer ce;
    /**
     * Here we can't change any variable directly since they are
     * all private
    */
    // ce.m_full_name = "Kanye engineer";  -> compiler error
    // ce.m_age = 55 // compiler error
    // ce.m_address = "dfdfdfdf " // compiler error
    cout << "Civil Engineer: " << ce << endl;
  
    return 0;

}
