#include <iostream>
#include "BankAccount.h"
using namespace std;

// Constructor definition
BankAccount::BankAccount(string n, double b) {
    cout << "Constructor called for account creation" << endl;

    if (b < 0) {
        throw "Invalid account creation: Initial balance cannot be negative.";
    }

    name = n;
    balance = b;
    cout << "Account created successfully for " << name << endl;
}

// Withdraw function definition
void BankAccount::withdraw(double amount) {
    cout << "Attempting withdrawal of " << amount << endl;

    if (amount > balance) {
        throw "Withdrawal failed: Insufficient balance.";
    }

    balance -= amount;
    cout << "Withdrawal successful. Remaining balance: " << balance << endl;
}

// Destructor definition
BankAccount::~BankAccount() {
    cout << "Destructor called. Cleaning up account of " << name << endl;
}
