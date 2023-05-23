#include <iostream>
using namespace std;
#include "Seller.hpp"

int main(){
    Employee emp1(129, 12000);
    Employee emp2(231, 13500);
    Seller vend1(146, 8500, 0.03, 155000);
    Seller vend2(275, 5500, 0.05, 132500);
    cout << "Employee 1 " << endl;
    emp1.print();
    cout << "Payment " << emp1.calculatePayment() << endl;
    cout << "Employee 2 " << endl;
    emp2.print();
    cout << "Payment " << emp2.calculatePayment() << endl;
    cout << "Seller 1 " << endl;
    vend1.print();
    cout << "Payment " << vend1.calculatePayment() << endl;
    cout << "Seller 2 " << endl;
    vend2.print();
    cout << "Payment " << vend2.calculatePayment() << endl;
}
