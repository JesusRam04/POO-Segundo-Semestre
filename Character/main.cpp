#include <iostream>
#include <string>
using namespace std;

#include "Bad.hpp"
#include "Good.hpp"

int main() {
    Character *list[4];
    list[0] = new Good("Mario", 1);
    list[1] = new Bad("Bowser", 1);
    list[2] = new Good("Luigi", 2);
    list[3] = new Bad("Wario", 2);
    for (int counter = 0; counter < 4; counter ++){
        list[counter]->print();
    }
    return 0;
}