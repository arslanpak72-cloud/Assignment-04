#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

public:
    BankAccount(string n, double b);   // Constructor
    void withdraw(double amount);      // Withdraw function
    ~BankAccount();                    // Destructor
};

#endif
