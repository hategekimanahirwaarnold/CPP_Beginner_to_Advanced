#include "person1.h"
#include "engineer1.h"

Engineer1::Engineer1()
{
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
