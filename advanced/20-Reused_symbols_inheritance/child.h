#ifndef CHILD_H
#define CHILD_H

#include "parent.h"
class Child : public Parent
{
public:
    Child();
    Child(int member_var) : m_member_var(member_var){
    }
    ~Child() = default;

    void print_var()const{
        cout << "The value in child is : " << m_member_var << endl;
    }
    void show_values()const{
        cout << "The value in child is : " << m_member_var << endl;
        cout << "The value in Parent is : " << Parent::m_member_var << endl;
    }
private:
    int m_member_var{1000};
};

#endif