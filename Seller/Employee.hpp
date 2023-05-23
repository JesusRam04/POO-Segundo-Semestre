#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
using namespace std;

class Employee {
public:
    Employee();
    Employee(int ide, double sal);
    void setIdent(int ide) { ident = ide; }
    void setSalary(double sal) { salary = sal; }
    int getIdent() { return ident; }
    double getSalary() { return salary; }
    double calculatePayment();
    void print();
protected:
    int ident;
    double salary;
};
Employee :: Employee() {
    ident = 0;
    salary = 0;
}
Employee :: Employee(int ide, double sal) {
    ident = ide;
    salary = sal;
}
// the payment of an employee is his salary
double Employee :: calculatePayment() {
    return salary;
}
void Employee::print() {
    cout << "Employee id " << ident;
    cout << " salary $" << salary << endl;
}

#endif