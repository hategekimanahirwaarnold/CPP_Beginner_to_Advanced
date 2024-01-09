#include "person1.h"
#include "civilEngineer.h"

CivilEngineer::CivilEngineer()
{
}

ostream& operator<<(ostream& out, const CivilEngineer& operand) {
    /**
     * Now you can't access anything from civil engineer since it was
     * derived from engineer which had only private variables and methods.
    */
    // out << "CivilEngineer [Full name : " << operand.get_full_name() <<
    //                 ",age : " << operand.get_age() <<
    //                 ",address : " << operand.get_address() <<
    //                 ",speciality : " << operand.m_speciality << endl;

    return out;
}
// Destructor
CivilEngineer::~CivilEngineer()
{
}
