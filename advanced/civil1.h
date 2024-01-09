#ifndef CIVIL_H 
#define CIVIL_H 
 
#include "engineer1.h"

/**
 * Civil will do `public` inheritance
 * => Since everything from Engineer was made private, nothing will change. Variables
 * will remain private in Civil class, unless those which were resurrected.
 * */ 

class Civil : private Engineer1
{
    friend ostream& operator<<(ostream& , const Civil& operand);
    public:
        Civil();
        ~Civil();

        void build_roads(){
            // m_full_name = "The Doctor aRnold"; // compiler error since it is private to the base class
            // m_age = 22; // compiler error since it is private to the base class
            // // m_address = "addd ddfdf "; // compiler error since it is private to the base class
            add(10, 2); //add methods were resurrected
            add(12, 23, 3);
        };
    private:
        string m_speciality{"None"};

};

#endif 
