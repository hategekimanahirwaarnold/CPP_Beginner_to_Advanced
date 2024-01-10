#ifndef CIVIL_H 
#define CIVIL_H 
 
#include "engineer1.h"

class Civil : private Engineer1
{
    friend ostream& operator<<(ostream& , const Civil& operand);
    public:
        Civil();
        Civil(string_view fullname, int age, string_view address, 
                int contract_count, string_view speciality);
        Civil(const Civil& source);
        ~Civil();

        void build_roads(){
        };
    private:
        string m_speciality{"None"};

};

#endif 
