#include "Captain.hpp"

namespace coup{

    Captain::Captain(Game &game, string name) : Player(game,name)
    {}
    
    void Captain::block(Player &p)
    {}

    void Captain::steal(Player &p)
    {
        if(p.money>=2)
        {
        p.money-=2;
        money+=2;
        }
    }

    void Captain::role()
    {
        cout<< "Captain role"<<endl;
    }
    
}