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
    PaymentStrategy *paymentMethod1 = new CreditCardPayment();
    PaymentStrategy *paymentMethod2 = new PayPalPayment();

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