#include "person1.h"
#include "civil1.h"

Civil::Civil()
{
    cout << "Default constructor for civil engineer called..." << endl;
}

Civil::Civil(string_view fullname, int age, string_view address, 
                int contract_count, string_view speciality) :
             Engineer1(fullname, age, address, contract_count),
             m_speciality(speciality)
{
    cout << "Custom constructor for civil engineer called..." << endl;
}
Civil::Civil(const Civil& source)
    : Engineer1(source), m_speciality(source.m_speciality)
{
    cout << "Custom copy constructor for civil engineer called..." << endl;
}

ostream& operator<<(ostream& out, const Civil& operand) {

    out << "Civil [Full name : " << operand.get_full_name() <<
                    ",age : " << operand.get_age() <<
                    ",address : " << operand.get_address() <<
                    ",speciality : " << operand.get_contract_count() << endl;

    return out;
}
// Destructor
Civil::~Civil()
{
}
