#pragma once
#include "Player.h"
#include <string>

using namespace std;

class Computer : public Player{
    public:
        char makeMove() override;
        string getName() override;
};