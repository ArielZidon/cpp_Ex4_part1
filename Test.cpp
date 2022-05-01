#include "doctest.h"
#include<iostream>
#include<string>
#include<vector>
#include <stdexcept>
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace std;
using namespace coup;

TEST_CASE("RUN GAME")
{
    Game game_1{};

	
	Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
	
	vector<string> players = game_1.players();

    CHECK_EQ(duke.coins(),0);
    CHECK_EQ(ambassador.coins(),0);
    CHECK_EQ(ambassador.coins(),0);
    CHECK_EQ(captain.coins(),0);
    CHECK_EQ(contessa.coins(),0);
    
    CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(assassin.income());
	CHECK_NOTHROW(ambassador.income());
	CHECK_NOTHROW(captain.income());
	CHECK_NOTHROW(contessa.income());

    CHECK_EQ(duke.coins(),1);
    CHECK_EQ(ambassador.coins(),1);
    CHECK_EQ(ambassador.coins(),1);
    CHECK_EQ(captain.coins(),1);
    CHECK_EQ(contessa.coins(),1);

    CHECK_NOTHROW(ambassador.transfer(duke, assassin));
    CHECK_NOTHROW(ambassador.transfer(captain, assassin));
    CHECK_NOTHROW(ambassador.transfer(ambassador, assassin));
    CHECK_NOTHROW(ambassador.transfer(contessa, assassin));

    CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(assassin.income());
	CHECK_NOTHROW(ambassador.income());
	CHECK_NOTHROW(captain.income());
	CHECK_NOTHROW(contessa.income());
    
    CHECK_NOTHROW(ambassador.transfer(duke, assassin));
}