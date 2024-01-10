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
        Civil(string_view fullname, int age, string_view address, 
                int contract_count, string_view speciality);
        Civil(const Civil& source);
        ~Civil();

        void build_roads(){
            // m_full_name = "The Doctor aRnold"; // compiler error since it is private to the base class
            // m_age = 22; // compiler error since it is private to the base class
            // // m_address = "addd ddfdf "; // compiler error since it is private to the base class

        };
    private:
        string m_speciality{"None"};

};

#endif 
