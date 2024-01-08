#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"

class Player : public Person
{
    friend ostream& operator<<(ostream& out, const Player& player);
    public :
        Player() = default;
        Player(string_view game_param);
    private :
        string m_game{"None"};
};

#endif
