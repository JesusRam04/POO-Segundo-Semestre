#include <iostream>
#include <string>
using namespace std;
#include "Animal.hpp"

class Dog: public Animal
{
public:
    Dog(string, int);
    void speak();
    void show();
};

Dog::Dog(string nam, int birthY): Animal(nam, birthY)
{
}

void Dog::speak()
{
    cout << "Woof!" << endl;
}

void Dog::show()
{
    cout << "Im the dog " << name <<" and i am "<<calculateAge()<<" years old"<<endl;
}