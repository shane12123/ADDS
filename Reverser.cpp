#include <iostream>
#include <string>
#include <cmath>
#include "Reverser.h"

using namespace std;

int Reverser::reverseDigit(int value){
    if (value < 0)
            return -1; 
    if (value < 10)
            return value;

    int lastDigit = value % 10;
    int remainingDigits = value / 10;
    int reversed = reverseDigit(remainingDigits);

    int temp = reversed;
    while (temp >= 10)
        temp /= 10;
    return lastDigit * pow(10, (int)log10(reversed) + 1) + reversed;
}

string Reverser::reverseString(string str){
    if (str.empty())
        return "";
    char lastChar = str[str.length() - 1];
    string revString = reverseString(str.substr(0, str.length() - 1));
    return string(1, lastChar) + revString;
}