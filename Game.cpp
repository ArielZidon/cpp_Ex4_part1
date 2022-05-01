#include "Game.hpp"

namespace coup
{
Game::Game(){
    t = 0;
}

vector<string> Game::players()
{
    vector<string> res;
    for(Player *p : players_online)
    {
        res.push_back(p->name);
    }

    return res;
}


string Game::turn()
{
    // if (this->players_online.size() <= 0)
    // {
    //     throw runtime_error("there is no players in the game");
    // }
    // return players_online[t]->name;

    return " ";
}

string Game::winner()
{
    if (this->players_online.size() <= 0)
    {
        throw runtime_error("there is no players in the game");
    }
    if (this->players_online.size() == 1)
    {
    return players_online[t]->name;
    }
    else{
        return "there is no winner yet";
    }
}

void Game::add_a_Player(Player *new_name)
{
    players_online.push_back(new_name);
}
}