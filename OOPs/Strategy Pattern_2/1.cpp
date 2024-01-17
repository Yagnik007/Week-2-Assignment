#include <bits/stdc++.h>
using namespace std;

class PaymentStrategy
{
public:
    virtual void pay(int value) = 0;
};

class NormalBilling : public PaymentStrategy
{
    void pay(int value)
    {
        cout << "Paid $" << value << " in Normal Billing." << endl;
    }
};

class DiscountBilling : public PaymentStrategy
{
    void pay(int value)
    {
        cout << "Paid $" << value << " in Discount Billing." << endl;
    }
};

int main()
{
    
}