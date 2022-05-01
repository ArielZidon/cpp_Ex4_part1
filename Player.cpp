#include "Player.hpp"

namespace coup{

class Game;
        
Player::Player(Game &g , string name)
{
    this->game = &g;
    this->name = name;
    this->money = 0;
}

void Player:: income()
{
    this->money++;
}

void Player::foreign_aid()
{
    this->money+=2;
}

void Player::coup(Player &person)
{
    cout<<person.name<<" is out!"<<endl;
}

void Player::role()
{
    cout<<"your player is:"<<endl;
}

int Player::coins()
{
    return this->money;
}

}