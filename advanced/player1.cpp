#include "person1.h"
#include "player1.h"

Player::Player(string_view game_param, string_view first, string_view last)
{
    m_game = game_param;
    first_name = first;
    last_name = last;
}

ostream& operator<<(ostream& out, const Player& player) {
    out << "Player : [ game : " << player.m_game
        << " names : " << player.get_first_name()
        << " " << player.get_last_name() << "]";
    
    return out;
}
