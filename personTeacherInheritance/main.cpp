//
//  main.cpp
//  personTeacherInheritanceCompositionFiles
//
//  Created by Yolanda Martínez Treviño on 01/06/23.
//

#include <iostream>
#include <fstream>
using namespace std;

#include "Teacher.hpp"

void readFromFile(Person *personsList[20], int &numberOfPersons){

    ifstream inFile;
    string name, depart;
    int day, month, year;
    char personChoice;
    
    inFile.open("file1.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    //inFile >> numberOfPersons;

    numberOfPersons = 0;

    while (inFile >> personChoice) {
        inFile >> name >> day >> month >> year;
        Date date(day, month, year);
        if (personChoice == 't') {
            inFile >> depart;
            personsList[numberOfPersons] = new Teacher(name, date, depart);
        }
        else {
            personsList[numberOfPersons] = new Person(name, date);
        }
        numberOfPersons++;
    }
    
    inFile.close();
}

void readFromConsole(){

    Person *personsList[20];
    int numberOfPersons;  // number of persons in personsList
    char personChoice;
    int initialAge, endAge;
    string name, depart;
    int day, month, year;
    cout << "Number of persons? ";
    cin >> numberOfPersons;
        for (int c = 0; c < numberOfPersons; c++) {
            cout << "Is the person a teacher? (y/n)" << endl;
            cin >> personChoice;
            cout << "Name? ";
            cin >> name;
            cout << "Birth date? type dd mm yy  " << endl;
            cin >> day >> month >> year;
            Date bday(day, month, year);
        if (personChoice == 'y') {
            cout << "Department? ";
            cin >> depart;
            Teacher *teach = new Teacher(name, bday, depart);
            personsList[c] = teach;
            }
        else {
            personsList[c] = new Person(name, bday);
        }
    }
}


int main() {
    
    Person *personsList[20];
    int numberOfPersons;  // number of persons in personsList
    char personChoice, menuOption;
    int initialAge, endAge;
    string name, depart;
    int day, month, year;

    readFromFile(personsList, numberOfPersons);
    
    do
    {
        cout << "Options " << endl;
        cout << endl;
        cout << "a) display all the persons " << endl;
        cout << "b) display the persons of certain age " << endl;
        cout << "c) finish " << endl;
        cout << "option -> " << endl;
        cin >> menuOption;
        
        switch (menuOption) {
            case 'a':  {
                for (int c = 0; c < numberOfPersons; c++)
                    personsList[c]->print();
                break;
            }
                
            case 'b':  {
                int tmpAge;
                cout << "initial age of the range? ";
                cin >> initialAge;
                cout << "end age of the range? ";
                cin >> endAge;
                for (int c = 0; c < numberOfPersons; c++) {
                    tmpAge = personsList[c]->calculateAge();
                    if (tmpAge >= initialAge && tmpAge <= endAge)
                        personsList[c]->print();
                }
                break;
            }
        }
        
    } while (menuOption != 'c');  // finish
    
    return 0;
}
