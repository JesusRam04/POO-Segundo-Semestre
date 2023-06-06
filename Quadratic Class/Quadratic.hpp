#include <iostream>
using namespace std;


class Quadratic {
public:
    Quadratic();
    Quadratic(int, int, int);
    // Setters
    void setICoefA(int a) { iCoefA = a; }
    void setICoefB(int b) { iCoefB = b; }
    void setICoefC(int c) { iCoefC = c; }
    // Getters
    int getICoefA() { return iCoefA; }
    int getICoefB() { return iCoefB; }
    int getICoefC() { return iCoefC; }
    void show();
    //operators
    Quadratic operator+(Quadratic ec2);
    Quadratic operator-(Quadratic ec2);
    Quadratic operator*(int iValue);
    void operator+=(Quadratic ec2);
    bool operator==(Quadratic ec2);
    Quadratic operator++();
private:
    int iCoefA, iCoefB, iCoefC;
};


Quadratic::Quadratic() {
    iCoefA = 1;
    iCoefB = 1;
    iCoefC = 1;
}

Quadratic::Quadratic(int iA, int iB, int iC) {
    iCoefA = iA;
    iCoefB = iB;
    iCoefC = iC;
}
void Quadratic::show() {
    if (iCoefA != 0) {
        cout << iCoefA;
        cout << "x^2 ";
    }
    if (iCoefB != 0) {
        if (iCoefB > 0) cout << " + ";
            cout << iCoefB;
            cout << "x ";
        }
    if (iCoefC != 0) {
        if (iCoefC > 0) cout << " + ";
        cout << iCoefC << endl;
    }
}

Quadratic Quadratic::operator+(Quadratic ec2) {
    Quadratic ecRes;
    ecRes.iCoefA = iCoefA + ec2.iCoefA;
    ecRes.iCoefB = iCoefB + ec2.iCoefB;
    ecRes.iCoefC = iCoefC + ec2.iCoefC;
    return ecRes;
}

Quadratic Quadratic::operator-(Quadratic ec2) {
    Quadratic ecRes;
    ecRes.iCoefA = iCoefA - ec2.iCoefA;
    ecRes.iCoefB = iCoefB - ec2.iCoefB;
    ecRes.iCoefC = iCoefC - ec2.iCoefC;
    return ecRes;
}

Quadratic Quadratic::operator*(int iValue) {
    Quadratic ecRes;
    ecRes.iCoefA = iCoefA * iValue;
    ecRes.iCoefB = iCoefB * iValue;
    ecRes.iCoefC = iCoefC * iValue;
    return ecRes;
}

void Quadratic::operator+=(Quadratic ec2) {
    iCoefA = iCoefA + ec2.iCoefA;
    iCoefB = iCoefB + ec2.iCoefB;
    iCoefC = iCoefC + ec2.iCoefC;
}

bool Quadratic::operator==(Quadratic ec2) {
    if (iCoefA == ec2.iCoefA && iCoefB == ec2.iCoefB && iCoefC == ec2.iCoefC) {
        return true;
    }
    else {
        return false;
    }
}

Quadratic Quadratic::operator++() {
    iCoefC++;
    return *this;
}