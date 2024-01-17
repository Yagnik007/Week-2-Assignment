#include <iostream>
#include <string>
using namespace std;

class Resource
{
public:
    virtual void accessResource() const = 0;
};

class RealResource : public Resource
{
public:
    void accessResource() const override
    {
        cout << "Accessing the real resource." << endl;
    }
};

class ProxyResource : public Resource
{

private:
    bool authenticate() const
    {
        string inputPassword;
        cout << "Enter the password: ";
        cin >> inputPassword;
        return inputPassword == password;
    }

public:
    ProxyResource(const string &password) : realResource(nullptr), password(password) {}

        mutable RealResource *realResource;
    string password;
};

int main()
{
    return 0;
}
