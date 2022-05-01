#include "Ambassador.hpp"

namespace coup{

    Ambassador::Ambassador(Game &game, string name) : Player(game, name)
    {}

    void Ambassador::transfer(Player &p1,Player &p2)
    {
        p1.money-=1;
        p2.money+=1;
    }

    void Ambassador::block_Stealing()
    {

    }
    void Ambassador::role()
    {
        cout<< "Ambassador role"<<endl;
    }
}