#include "Contessa.hpp"

namespace coup{

    Contessa::Contessa(Game &game, string name) : Player(game,name)
    {}

    void Contessa::block(Player &p)
    {
        
    }
    void Contessa::role()
    {
        cout<< "Contessa role"<<endl;
    }
    
}