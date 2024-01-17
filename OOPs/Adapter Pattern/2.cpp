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


int main()
{

}
