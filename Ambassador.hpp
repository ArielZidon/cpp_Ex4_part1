#include"Player.hpp"

namespace coup{
     class Ambassador : public Player
    {
    public:
        Ambassador(Game &game, string name);
        void transfer(Player &p1,Player &p2);
        void block_Stealing();
        void role();
    };
}