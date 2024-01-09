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
        Person(string& first_name_param, string& last_name_param);
        ~Person();

        // Getters
        string get_first_name() const {
            return first_name;
        }

        string get_last_name() const {
            return last_name;
        }
        // setters
        void set_first_name(string_view fn){
            first_name = fn;
        }
        void set_last_name(string_view ln){
            last_name = ln;
        }

        private:
            string first_name{"Mysterious"};
            string last_name{"Person"};

};

#endif
