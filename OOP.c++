#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  

public:
    // Constructor
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(double amount) {
        balance -= amount;
        cout << "withdraw: " << amount << endl;
    }
    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    BankAccount myAccount(1000); 
    myAccount.deposit(500);
    myAccount.withdraw(200);
    myAccount.showBalance();
    return 0;
}