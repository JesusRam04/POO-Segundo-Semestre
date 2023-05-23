#include <iostream>
using namespace std;
#include "Employee.hpp"

class Seller : public Employee {
public:
    Seller();
    Seller(int ide, double sal, double com, int sales);
    void setCommission(double com) { commission = com; }
    double getCommission() { return commission; }
    void setSales(int s) { sales = s; }
    int getSales() { return sales; }
    double calculatePayment();
    void print();

private:
    double commission;
    int sales;
};

Seller::Seller() : Employee() {
    commission = 0;
    sales = 0;
}

Seller::Seller(int ide, double sal, double com, int s) : Employee(ide, sal) {
    commission = com;
    sales = s;
}

double Seller::calculatePayment() {
    return salary + commission * sales;
}

void Seller::print() {
    Employee::print();
    cout << "Commission: " << commission << endl;
    cout << "Sales: " << sales << endl;
}