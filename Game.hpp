#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
#include "Player.hpp"

using namespace std;
namespace coup
{
    class Player;
    class Game
    {
        public:
        vector<Player*> players_online;
        unsigned int t;
        
        Game();
        vector<string> players();
        string turn();
        string winner();
        void add_a_Player(Player *new_name);

    };
}