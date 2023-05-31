#include <string>
#include <iostream>
using namespace std;
#include "Character.hpp"

class Bad : public Character
{
public:
    Bad();
    Bad(string n, int d);
    void print();
};

Bad::Bad() : Character() {}

Bad::Bad(string n, int d) : Character(n, d) {}

void Bad::print() {
    cout << "I am a bad guy, my name is " <<name<< " and I am going to the ";
    if (direction == 1) {
        cout << "right.\n";
    }
    else {
        cout << "left.\n";
    }
}