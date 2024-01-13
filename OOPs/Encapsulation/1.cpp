#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    int balance;

public:
    BankAccount(string const &accountNo, int balanceUser)
        : accountNumber(accountNo), balance(balanceUser) {}

    void deposit(int money)
    {
        balance += money;
    }

    void withdraw(int money)
    {
        if (balance >= money)
        {
            balance -= money;
        }
        else
            cout << "Low Balance to Withdraw" << endl;
    }

    void displayDetails()
    {
        cout << "accountNumber: " << accountNumber << endl;
        cout << "balance: " << balance << endl;
    }
};

int main()
{

    BankAccount person1("NH10BJ69", 69000);
    person1.displayDetails();
    person1.deposit(5000);
    person1.displayDetails();
    person1.withdraw(10000);
    person1.displayDetails();
    return 0;
}
