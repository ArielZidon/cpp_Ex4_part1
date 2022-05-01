#include "Assassin.hpp"

namespace coup{
    
    Assassin::Assassin(Game &game, string name) : Player(game,name)
    {}

    void kill(Player &p)
    {}

    void role()
    {
        cout<< "Assassin role"<<endl;
    }
   
}