#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Human human("Juan");
    Computer computer;

    Referee referee;

    Player* winner = referee.refGame(&human, &computer);

    if (winner == nullptr) {
        std::cout << "It's a Tie.\n";
    } else {
        std::cout << winner->getName() << " Wins.\n";
    }

    return 0;
}