#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <string_view>
#include <iostream>

using namespace std;

class Person
{
    friend ostream& operator<<(ostream& out, const Person& person);
    public:
        Person();
        Person(string_view fullname, int age, const string address);
        ~Person();

        // Getters
        string get_full_name() const {
            return m_full_name;
        }

        int get_age() const {
            return m_age;
        }
        string get_address()const{
            return m_address;
        }
        public:
            string m_full_name{"None"};
        protected:
            int m_age{0};
        private:
            string m_address{"None"};

};

#endif
