#include <bits/stdc++.h>
using namespace std;

class AbstractFactory
{

public:
    virtual void modern() = 0;
    virtual void Victorian() = 0;
};

class ConcreteFactory1 : public AbstractFactory
{
private:
    string info;

public:
    ConcreteFactory1(string info) : info(info) {}
    void modern()
    {
        cout << info << endl;
    }
    void Victorian()
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
    void modern()
    {
        cout << info << endl;
    }
    void Victorian()
    {
        cout << info << endl;
    }
};

int main()
{
    ConcreteFactory1 c1("modern is from concrete factory 1.");
    ConcreteFactory1 c2("Victorian is from concrete factory 2.");
    c1.modern();
    c1.Victorian();
    c2.modern();
    c2.Victorian();
}