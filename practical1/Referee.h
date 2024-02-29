#pragma once
#include "Player.h"
#include <string>

using namespace std;

class Referee{
    private:
        char winner(char move1, char move2);
    public:
        Referee();
        Player* refGame(Player* player1, Player* player2);
};