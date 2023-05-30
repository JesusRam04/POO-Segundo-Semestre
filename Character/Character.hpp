#include <string>
#include <iostream>
using namespace std;

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


class Character
{
public:
    Character();
    Character(string n, int d);
    void setName(string n) { name = n; }
    string getName() { return name; }
    void setDirection(int d) { direction = d; }
    int getDirection() { return direction; }
    virtual void print() = 0; // Note that this is a virtual method.
                            // THEREFORE this is an abstract class.
protected:
    string name;
    int direction; // 1 means going right, 2 means going left
};
Character::Character() {
name = "-";
direction = 1; // 1 means going right
}
Character::Character(string n, int d) {
name = n;
direction = d;
}

#endif // CHARACTER_HPP