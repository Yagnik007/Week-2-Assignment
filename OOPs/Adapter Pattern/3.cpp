#include <bits/stdc++.h>
using namespace std;

class Target
{
public:
    virtual void request() const = 0;
};

class Adaptee
{
public:
    void specificRequest() const
    {
        cout << "Adaptee's specific request." << endl;
    }
};

class Adapter : public Target
{
public:
    Adapter(Adaptee *adaptee) : adaptee(adaptee) {}

    void request() const override
    {
        cout << "Adapter converts Adaptee's specific request to Target's request." << endl;
        adaptee->specificRequest();
    }

private:
    Adaptee *adaptee;
};

int main()
{

    Adaptee *adaptee = new Adaptee();

    Adapter *adapter = new Adapter(adaptee);

    cout << "Using Adapter to call Target's request:" << endl;
    adapter->request();

    delete adapter;

    return 0;
}
