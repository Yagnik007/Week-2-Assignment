#include <bits/stdc++.h>
using namespace std;

class AbstractFactory
{

public:
    virtual void ProductA() = 0;
    virtual void ProductB() = 0;
};

class ConcreteFactory1 : public AbstractFactory
{
private:
    string info;

public:
    ConcreteFactory1(string info) : info(info) {}
    void ProductA()
    {
        cout << info << endl;
    }
    void ProductB()
    {
        cout << info << endl;
    }
};

class ConcreteFactory2 : public AbstractFactory
{
private:
    string info;

public:
    ConcreteFactory2(string info) : info(info) {}
    void ProductA()
    {
        cout << info << endl;
    }
    void ProductB()
    {
        cout << info << endl;
    }
};

int main()
{
    ConcreteFactory1 c1("Product A is from concrete factory 1.");
    ConcreteFactory1 c2("Product B is from concrete factory 2.");
    c1.ProductA();
    c1.ProductB();
    c2.ProductA();
    c2.ProductB();
}