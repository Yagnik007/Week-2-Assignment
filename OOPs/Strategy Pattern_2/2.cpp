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
    PaymentStrategy *paymentMethod1 = new NormalBilling();
    PaymentStrategy *paymentMethod2 = new DiscountBilling();

    class ShoppingCart
    {
    public:
        void checkout(int amount, PaymentStrategy *paymentStrategy)
        {
            paymentStrategy->pay(amount);
        }
    };

    ShoppingCart shoppingCart;
    int totalAmount = 100;

    shoppingCart.checkout(totalAmount, paymentMethod1);
    shoppingCart.checkout(totalAmount, paymentMethod2);
}