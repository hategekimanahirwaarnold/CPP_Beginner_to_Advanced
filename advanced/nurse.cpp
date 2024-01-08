#include "person1.h"
#include "engineer.h"

Engineer::Engineer()
{
}

ostream& operator<<(ostream& out, const Engineer& operand) {
    out << "Engineer [Full name : " << operand.get_full_name() <<
                    ",age : " << operand.get_age() <<
                    ",address : " << operand.get_address() <<
                    ",practice certificate id : " << operand.contract_count << endl;

    return out;
}
// Destructor
Engineer::~Engineer()
{
}
