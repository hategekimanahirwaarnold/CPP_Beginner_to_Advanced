#ifndef ENGINEER_H
#define ENGINEER_H
 
#include "person1.h"

/**
 * Engineer will do `private` inheritance
 * => anything from person which is public or protected will become private 
 * */ 

class Engineer : private Person
{
    friend ostream& operator<<(ostream& , const Engineer& operand);
    public:
        Engineer();
        ~Engineer();

        void build_something(){
            m_full_name = "The Doctor aRnold"; // OK since it is private to this class
            m_age = 22; // OK since it is private to this class
            // m_address = "addd ddfdf "; // compiler error since it is private to the base class
        };
    private :
        int contract_count{0};

};

#endif // ENGINEER_H
