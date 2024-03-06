#pragma once
#include "Player.h"
#include <string>

using namespace std;

class Referee{
    public:
        Player* refGame(Player* player1, Player* player2);
};