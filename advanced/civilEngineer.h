#ifndef CIVILENGINEER_H
#define CIVILENGINEER_H
 
#include "engineer.h"

/**
 * CivilEngineer will do `public` inheritance
 * => Since everything from Engineer was made private, nothing will change. Variables
 * will remain private in CivilEngineer class.
 * */ 

class CivilEngineer : private Engineer
{
    friend ostream& operator<<(ostream& , const CivilEngineer& operand);
    public:
        CivilEngineer();
        ~CivilEngineer();

        void build_roads(){
            // m_full_name = "The Doctor aRnold"; // compiler error since it is private to the base class
            // m_age = 22; // compiler error since it is private to the base class
            // // m_address = "addd ddfdf "; // compiler error since it is private to the base class
        };
    private :
        string m_speciality{"None"};

};

#endif 
