#include"Player.hpp"

namespace coup{
    class Duke : public Player
    {
    public:
        Duke(Game &game, string name);
        void block(Player &p);
        void tax();
        void role();
    };
}