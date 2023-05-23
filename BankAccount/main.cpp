#include <iostream>
using namespace std;
#include "CommAcc.hpp"

int main(){
    CommAcc cc;
    BankAcc cb;
    
    int accountNumber;
    double balance, comm;
    cout << "Type the account number for the bank account ";
    cin >> accountNumber;
    cb.setAccNumber(accountNumber);
    cout << "Type the initial balance for the bank account ";
    cin >> balance;
    cb.setBalance(balance);
    cout << "Type the account number for the commission account ";
    cin >> accountNumber;
    cc.setAccNumber(accountNumber);
    cout << "Type the initial balance for the commission account ";
    cin >> balance;
    cc.setBalance(balance);
    cout << "Type the amount of money that will be charged for each withdrawal ";
    cin >> comm;
    cc.setComm(comm);
    cout << "The bank account information is " << endl;
    cb.print();
    cout << "The commission account information is " << endl;
    cc.print();
    cb.withdrawal(100);
    cc.withdrawal(100);
    cout << "after the withdrawal the bank account " << endl;
    cb.print();
    cout << "after the withdrawal the commission bank account " << endl;
    cc.print();
    cout<<"hello world"<<endl;
    return 0;
}