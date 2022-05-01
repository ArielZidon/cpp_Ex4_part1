#pragma once
#include <iostream>
#include <string>
#include "Game.hpp"


using namespace std;

namespace coup
{   
    class Game;

    class Player
    {
        protected:
        Game *game;

        public:
        string name;
        int money;

        Player(Game &g , string name);
        void income();
        void foreign_aid();
        void coup(Player &person);
        void role();
        int coins();

    };
}