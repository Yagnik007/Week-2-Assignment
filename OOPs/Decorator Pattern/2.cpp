#include <bits/stdc++.h>
using namespace std;

class Coffee
{
public:
    virtual double cost() = 0;
};

class SimpleCoffee : public Coffee
{
public:
    double cost()
    {
        return 5.0;
    }
};

class MilkDecorator : public Coffee
{
private:
    Coffee *coffee;

public:
    MilkDecorator(Coffee *coffee) : coffee(coffee) {}

    double cost()
    {
        return coffee->cost() + 2.0;
    }
};

class SugarDecorator : public Coffee
{
private:
    Coffee *coffee;

public:
    SugarDecorator(Coffee *coffee) : coffee(coffee) {}

    double cost()
    {
        return coffee->cost() + 1.0;
    }
};

int main()
{

    Coffee *simpleCoffee = new SimpleCoffee();
    std::cout << "Cost of simple coffee: $" << simpleCoffee->cost() << std::endl;

    Coffee *milkCoffee = new MilkDecorator(simpleCoffee);
    std::cout << "Cost of coffee with milk: $" << milkCoffee->cost() << std::endl;

    Coffee *sugarCoffee = new SugarDecorator(milkCoffee);
    std::cout << "Cost of coffee with milk and sugar: $" << sugarCoffee->cost() << std::endl;

    return 0;
}
