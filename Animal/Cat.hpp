#include <iostream>
#include <string>
using namespace std;
#include "Animal.hpp"

class Cat: public Animal
{
public:
    Cat(string, int);
    void speak();
    void show();
};

Cat::Cat(string nam, int birthY): Animal(nam, birthY)
{
}

void Cat::speak()
{
    cout << "Meow!" << endl;
}

void Cat::show()
{
    cout << "Im the cat " << name <<" and i am "<<calculateAge()<<" years old"<<endl;
}