#include "person1.h"
#include "player2.h"

Player::Player()
{
}

ostream& operator<<(ostream& out, const Player& player) {
    out << "Player : [ Full name : " << player.get_full_name()
        << ", age : " << player.get_age()
        << ", address : " << player.get_address() << "]";
    
    return out;
}

Player::~Player()
{
}
