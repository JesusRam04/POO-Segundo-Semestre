#include <iostream>
using namespace std;
#include "BankAcc.hpp"

class CommAcc : public BankAcc
{
public:
    CommAcc();
    CommAcc(int n, double b, double c);
    double getComm() { return comm; }
    void setComm(double c) { comm = c; }
    bool withdrawal(double amount);
    void print();
private:
    double comm;
};

CommAcc::CommAcc() : BankAcc() {
    comm = 0;
}

CommAcc::CommAcc(int n, double b, double c) : BankAcc(n, b) {
    comm = c;
}

bool CommAcc::withdrawal(double amount) {
    if (balance >= amount + comm) {
        balance -= (amount + comm);
        return true;
    }
    else
        return false;
}

void CommAcc::print() {
    BankAcc::print();
    cout << "Commission: " << comm << endl;
}
