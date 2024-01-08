#include "person.h"
#include "player.h"

Player::Player(string_view game_param)
    : m_game(game_param)
{
}

ostream& operator<<(ostream& out, const Player& player) {
    /**
     * You can only access the public methods from the inherited class
    */
    out << "Player : [ game : " << player.m_game
        << " names : " << player.get_first_name()
        << " " << player.get_last_name() << "]";
    
    return out;
}
