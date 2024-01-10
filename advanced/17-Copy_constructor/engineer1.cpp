#include "person1.h"
#include "engineer1.h"

Engineer1::Engineer1()
{
    cout << "Default constructor for engineer called..." << endl;
}
Engineer1::Engineer1(string_view fullname, int age, string_view address, 
                    int contract_count_param) :
                    Person(fullname, age, address), contract_count(contract_count_param)
{
    cout << "Custom constructor for engineer called..." << endl;
}
// Bad
/**
 Engineer1::Engineer1(const Engineer1& source)
            : contract_count(source.contract_count)
{
    cout << "Custom copy constructor for engineer called..." << endl;
}
*/

// Not Optimum
/*
Engineer1::Engineer1(const Engineer1& source)
            // : Person(source.m_full_name, source.m_age, source.m_address) // we will create a copy of person and we don't have access to address variable (unless we use a getter)
            : Person(source.m_full_name, source.m_age, source.get_address()) // This will work but the problem we will create a copy of person object
            , contract_count(source.contract_count)
{
    cout << "Custom copy constructor for engineer called..." << endl;
}
*/

Engineer1::Engineer1(const Engineer1& source)
            : Person(source) // This is good
            , contract_count(source.contract_count)
{
    cout << "Custom copy constructor for engineer called..." << endl;
}
ostream& operator<<(ostream& out, const Engineer1& operand) {
    out << "Engineer [Full name : " << operand.get_full_name() <<
                    ",age : " << operand.get_age() <<
                    ",address : " << operand.get_address() <<
                    ",contract count: " << operand.contract_count << endl;

    return out;
}
// Destructor
Engineer1::~Engineer1()
{
}
