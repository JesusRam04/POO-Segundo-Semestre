#include <iostream>
using namespace std;
#include "CommAcc.hpp"

int main(){
    BankAcc *accList[20];
    int sizeAccList;
    char accType;
    int accId;
    double initialBalance, comm, amount;
    char option;
    cout << "How many bank accounts are there? ";
    cin >> sizeAccList;
    for (int c = 0; c < sizeAccList; c++)
    {
        cout << "Your account will be regular or commision? (r or c) ";
        cin >> accType;
        cout << "Account number? ";
        cin >> accId;
        cout << "Initial Balance? ";
        cin >> initialBalance;
        if (accType == 'c')
        {
            cout << "Commision fee for withdrawal? ";
            cin >> comm;  
            accList[c] = new CommAcc(accId, initialBalance, comm);  
        }
        else
        {
            accList[c] = new BankAcc(accId, initialBalance);
        }
    }
    do
    {
        cout << "Options " << endl;
        cout << endl;
        cout << "a) deposit " << endl;
        cout << "b) withdrawal " << endl;
        cout << "c) display balance " << endl;
        cout << "d) exit " << endl;
        cout << "option ->";
        cin >> option;
        switch (option) {
            case 'a':
            {
                cout << "Account number? ";
                cin >> accId;
                cout << "Amount to deposit? ";
                cin >> amount;
                for (int c = 0; c < sizeAccList; c++)
                {
                    if (accList[c]->getAccNumber() == accId)
                    {
                        accList[c]->deposit(amount);
                        break;
                    }
                }
                break;
            }
            case 'b':
            {
                cout << "Account number? ";
                cin >> accId;
                cout << " Amount to withdrawal? ";
                cin >> amount;
                for (int c = 0; c < sizeAccList; c++)
                {
                    if (accList[c]->getAccNumber() == accId)
                    {
                        if(accList[c]->withdrawal(amount)){
                            cout << "Withdrawal successful" << endl;
                        }
                        else{
                            cout << "Withdrawal failed, not enough money" << endl;
                        }
                        break;
                    }
                }
                break;
            }
            case 'c':
            {
                cout << "Account number? ";
                cin >> accId;
                for (int c = 0; c < sizeAccList; c++)
                {
                    if (accList[c]->getAccNumber() == accId)
                    {
                        accList[c]->print();
                        break;
                    }
                }
                break;
            }
        }
    } while (option != 'd');
    return 0;
}