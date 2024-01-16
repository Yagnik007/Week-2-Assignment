#include <bits/stdc++.h>
using namespace std;

class PaymentStrategy
{
public:
    virtual void pay(int value) = 0;
};

class CreditCardPayment : public PaymentStrategy
{
    void pay(int value)
    {
        cout << "Paid $" << value << "using Credit Card." << endl;
    }
};

class PayPalPayment : public PaymentStrategy
{
    void pay(int value)
    {
        cout << "Paid $" << value << "using PayPal." << endl;
    }
};

int main()
{
    
}