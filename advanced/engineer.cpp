#include "person1.h"
#include "nurse.h"

Nurse::Nurse()
{
}

ostream& operator<<(ostream& out, const Nurse& operand) {
    out << "Nurse [Full name : " << operand.get_full_name() <<
                    ",age : " << operand.get_age() <<
                    ",address : " << operand.get_address() <<
                    ",practice certificate id : " << operand.practice_certificate_id << endl;

    return out;
}
// Destructor
Nurse::~Nurse()
{
}
