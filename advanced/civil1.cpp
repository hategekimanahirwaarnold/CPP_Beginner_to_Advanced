#include "person1.h"
#include "civil1.h"

Civil::Civil()
{
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
