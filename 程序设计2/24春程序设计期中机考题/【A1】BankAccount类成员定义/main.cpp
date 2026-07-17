// 此文件为锁定文件，请勿编辑该文件

#include <iostream>
#include <string>
using namespace std;

#include "BankAccount.hpp"

void print_BankAccount(BankAccount &ba)
{
    cout << "BankAccount Information:" << endl;
    cout << "accountNumber: " << ba.get_accountNumber() << endl;
    cout << "ownerName: " << ba.get_ownerName() << endl;
    cout << "balance: " << ba.get_balance() << endl;
}

int main()
{
    string accountNumber;
    string ownerName;
    int balance;
    cin >> accountNumber >> ownerName >> balance;
    BankAccount ba;
    ba.set_accountNumber(accountNumber);
    ba.set_ownerName(ownerName);
    ba.set_balance(balance);
    print_BankAccount(ba);
}