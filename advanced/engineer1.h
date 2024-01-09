#ifndef ENGINEER1_H
#define ENGINEER1_H
 
#include "person1.h"

/**
 * Engineer will do `private` inheritance
 * => anything from person which is public or protected will become private 
 * */ 

class Engineer1 : private Person
{
    friend ostream& operator<<(ostream& , const Engineer1& operand);
    public:
        Engineer1();
        ~Engineer1();

        void build_something(){
            m_full_name = "The Doctor aRnold"; // OK since it is private to this class
            m_age = 22; // OK since it is private to this class
            // m_address = "addd ddfdf "; // compiler error since it is private to the base class
        };
        int get_contract_count() const{ // we use const to show that we don't want to edit our object
            return contract_count;
        }
    /**
     * resurrect members to have public specifier
    */
    public:
        using Person::add; // all add methods will be resurrected
    /**
     * resurrect members to have protected specifier
    */
    protected:
        using Person::get_full_name;
        using Person::get_age;
        using Person::get_address;
        // using Person::m_address; // compiler error, you can't resurrect something which was private in base class
    private :
        int contract_count{0};

};

#endif // ENGINEER_H
