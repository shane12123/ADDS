#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

Human::Human(string name) : name(name){}

char Human::makeMove(){
    char move;
    cout << "Enter move: ";
    cin >> move;
    return move;
}

string Human::getName(){
    return name;
}