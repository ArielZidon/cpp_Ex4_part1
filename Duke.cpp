#include "Duke.hpp"

namespace coup{

    Duke::Duke(Game &game, string name) : Player(game,name)
    {}  

    void Duke::block(Player &p)
    {
        
    }
    void Duke::tax()
    {
        money+=3;
    }
    void Duke::role()
    {
        cout<< "Duke role"<<endl;
    }

}