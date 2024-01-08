#ifndef NURSE_H
#define NURSE_H
 
#include "person1.h"

/**
 * Nurse will do `protected` inheritance
 * => anything from person which is public will become protected
 * */ 

class Nurse : protected Person
{
    friend ostream& operator<<(ostream& , const Nurse& operand);
    public:
        Nurse();
        ~Nurse();

        void treat_unwell_person(){
            m_full_name = "The Doctor aRnold"; // OK
            m_age = 22; // OK
            // m_address = "addd ddfdf "; compiler error
        };
    private :
        int practice_certificate_id{0};

};

#endif
