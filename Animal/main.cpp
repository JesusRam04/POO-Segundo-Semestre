#include <iostream>
#include <string>
using namespace std;
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    Animal *list[3]; 
    list[0] = new Cat("Sylvester", 1947);   
    list[1] = new Dog("Scooby Doo", 1969);
    list[2] = new Cat("Tom", 1940);

    for (int counter = 0; counter < 3; counter ++){
        list[counter]->show();
        list[counter]->speak();
    }
    return 0;
}