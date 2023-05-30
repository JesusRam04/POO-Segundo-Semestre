#ifndef BANKACC_HPP
#define BANKACC_HPP

#include <iostream>
using namespace std;

class BankAcc
{
public:
    BankAcc();
    BankAcc(int n, double b);
    int getAccNumber() { return accNumber; }
    void setAccNumber(int n) { accNumber = n; }
    double getBalance() { return balance; }
    void setBalance(double b) { balance = b; }
    void deposit(double amount);
    bool withdrawal(double amount); // it has to be overridden in Commission Bank

    void print(); // it has to be overridden in the Commission Bank Account class
protected:
    int accNumber;
    double balance;
};
BankAcc::BankAcc() {
    accNumber = 0;
    balance = 0;
}
BankAcc::BankAcc(int n, double b) {
    accNumber = n;
    balance = b;
}
void BankAcc::deposit(double amount){
    balance += amount;
}
// if there is enough money, subtracts the amount from the balance and returns true,
//otherwise the balance remains unchanged and returns false.
bool BankAcc::withdrawal(double amount) {
    if (balance >= amount) {
        balance -= amount;
        return true;
    }
    else
        return false;
}
void BankAcc::print() {
    cout << endl << "Account Number: " << accNumber << " balance: " << balance << endl;
}

#endif // !BANKACC_HPP