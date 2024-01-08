#ifndef PLAYER_H
#define PLAYER_H

#include "person1.h"
/**
 * with public `base class specifier`, public instances will stay public,
 * protected instances will stay protected, private instances will stay private. 
*/
class Player : public Person
{
    friend ostream& operator<<(ostream& out, const Player& player);
    public :
        Player();
        ~Player();
        // see the access we have to inherited members from Person
        void play(){
            /**
             * we can access m_full_name and m_age since they are public and protected variables
            */
           m_full_name = "Hirwa Bethoven"; // OK
           m_age = 32; // OK
        //    m_address = "addfsdfd"; // This would throw compiler error since it's a private variable
        }
    private :
        int m_career_start_year{0};
        double m_salary{0.0};
        int health_factor{0}; // it will be ranked from 0 to 10
};

#endif
