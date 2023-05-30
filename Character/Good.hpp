#include <string>
#include <iostream>
using namespace std;
#include "Character.hpp"


class Good : public Character
{
public:
    Good();
    Good(string n, int d);
    void print();
};

Good::Good() : Character() {}

Good::Good(string n, int d) : Character(n, d) {}

void Good::print() {
    cout << "I am a good guy, my name is " <<name<< " and I am going to the ";
    if (direction == 1) {
        cout << "right.\n";
    }
    else {
        cout << "left.\n";
    }
}