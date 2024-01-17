#include <bits/stdc++.h>
using namespace std;

class AbstractFactory
{

public:
    virtual void desktop() = 0;
    virtual void mobile() = 0;
};

class ConcreteFactory1 : public AbstractFactory
{
private:
    string info;

public:
    ConcreteFactory1(string info) : info(info) {}
    void desktop()
    {
        cout << info << endl;
    }
    void mobile()
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
    void desktop()
    {
        cout << info << endl;
    }
    void mobile()
    {
        cout << info << endl;
    }
};

int main()
{
    ConcreteFactory1 c1("desktop is from concrete factory 1.");
    ConcreteFactory1 c2("mobile is from concrete factory 2.");
    c1.desktop();
    c1.mobile();
    c2.desktop();
    c2.mobile();
}