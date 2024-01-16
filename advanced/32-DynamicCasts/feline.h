#ifndef FELINE_H
#define FELINE_H
#include "animal.h"

class Feline : public Animal
{
public:
    Feline() = default;
    Feline(string_view fur_style, string_view description);
    virtual ~Feline();

    virtual void run() const{
        cout << "Feline " << m_description << " is running" << endl;
    }
    void do_some_feline_thingy(){
        cout << "Doing some feline thingy..." << endl;
    }
    string m_fur_style;
};

#endif // FELINE_H
