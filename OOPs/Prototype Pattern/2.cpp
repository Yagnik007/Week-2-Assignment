#include <bits/stdc++.h>
using namespace std;

class Prototype
{
public:
    virtual Prototype *clone() const = 0;
    virtual void showInfo() const = 0;
};

class ConcretePrototype1 : public Prototype
{
public:
    Prototype *clone() const override
    {
        return new ConcretePrototype1(*this);
    }

    void showInfo() const override
    {
        cout << "Concrete Prototype 1" << endl;
    }
};

class ConcretePrototype2 : public Prototype
{
public:
    Prototype *clone() const override
    {
        return new ConcretePrototype2(*this);
    }

    void showInfo() const override
    {
        cout << "Concrete Prototype 2" << endl;
    }
};

int main()
{

    ConcretePrototype1 prototype1;
    ConcretePrototype2 prototype2;

    Prototype *clone1 = prototype1.clone();
    Prototype *clone2 = prototype2.clone();

    clone1->showInfo();
    clone2->showInfo();

    delete clone1;
    delete clone2;

    return 0;
}
