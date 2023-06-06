#include <iostream>
#include <cmath>
using namespace std;
#include "Quadratic.hpp"


int main()
{
    int iA, iB, iC;
    Quadratic ec1(5,3,2), ecRes;
    Quadratic ec3 = ec1; // equation 1 y equation 3 have the same values.
    cout << "Type in the coefficients for the second equation" << endl;
    cin >> iA >> iB >> iC;
    Quadratic ec2(iA, iB, iC);
    /*********************************/
    cout << endl;
    cout << "=== Sum of Equations 1 and 2" << endl;
    cout << "Equation 1 : " ;
    ec1.show();
    cout << "Equation 2 : ";
    ec2.show();
    ecRes = ec1 + ec2;
    cout << "Result : ";
    ecRes.show();
    cout << "Equation 1 : " ;
    ec1.show();
    cout << "Equation 2 : ";
    ec2.show();
    cout << endl;
    /*********************************/
    cout << endl;
    cout << "=== Subtraction of Equations 1 and 2" << endl;
    cout << "Equation 1 : " ;
    ec1.show();
    cout << "Equation 2 : " ;
    ec2.show();
    ecRes = ec1 - ec2;
    cout << "Result : ";
    ecRes.show();
    cout << "Equation 1 : " ;
    ec1.show();
    cout << "Equation 2 : ";
    ec2.show();
    cout << endl;
    /*********************************/
    cout << endl;
    cout << "=== Multiply Equation 1 by the integer value 2" << endl;
    cout << "Equation 1 : " ;
    ec1.show();
    ecRes = ec1 * 2;
    cout << "Result : ";
    ecRes.show();
    cout << "Equation 1 : " ;
    ec1.show();
    cout << endl;
    /*********************************/
    cout << endl;
    cout << "=== Compare equation 1 and equation 2 with ==, they must be different" << endl;
    cout << "Equation 1 : " ;
    ec1.show();
    cout << "Equation 2 : " ;
    ec2.show();
    if (ec1 == ec2)
    cout << "They are equal" << endl;
    else
    cout << "They are different " << endl;
    /*********************************/
    cout << endl;
    cout << "=== Compare equation 1 and equation 3 with ==, they must be equal" << endl;
    cout << "Equation 1 : " ;
    ec1.show();
    cout << "Equation 3 : " ;
    ec3.show();
    if (ec1 == ec3)
    cout << "They are equal" << endl;
    else
    cout << "They are different" << endl;
    /*********************************/
    cout << endl;
    cout << "=== Apply += to add Equation 2 to Equation 1" << endl;
    cout << "Equation 1 : " ;
    ec1.show();
    cout << "Equation 2 : ";
    ec2.show();
    ec1 += ec2;
    cout << "Equation 1 : " ;
    ec1.show();
    cout << "Equation 2 : ";
    ec2.show();
    cout << endl;
    /*********************************/
    cout << endl;
    cout << "=== Apply ++ to Equation 1 " << endl;
    cout << "Equation 1 : " ;
    ec1.show();
    ecRes = ++ec1;
    cout << "Result : ";
    ecRes.show();
    cout << "Equation 1 : " ;
    ec1.show();
    return 0;
}