#include <iostream>
#include <string>

class Animal
{
public:
    Animal(string, int);
    int calculateAge();
    virtual void speak() = 0; // Note that these are pure virtual functions.
    virtual void show() = 0; // THEREFORE this is an abstract class.
protected:
    string name;
    int birthYear;
};
Animal::Animal(string nam, int birthY)
{
    name = nam;
    birthYear = birthY;
}
int Animal::calculateAge()
{
    return 2023 - birthYear;
}