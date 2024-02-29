#pragma once
#include "Player.h"
#include <string>

using namespace std;

class Human : public Player{
    private:
        string name;
    public:
        Human(string name = "Human");
        char makeMove() override;
        string getName() override;
};