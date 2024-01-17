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

    void accessResource() const override
    {
        if (authenticate())
        {
            if (!realResource)
            {
                realResource = new RealResource();
            }
            realResource->accessResource();
        }
        else
        {
            cout << "Access denied! Incorrect password." << endl;
        }
    }

    mutable RealResource *realResource;
    string password;
};

int main()
{

    ProxyResource proxy("secret123");

    proxy.accessResource();

    ProxyResource wrongPasswordProxy("wrongpassword");
    wrongPasswordProxy.accessResource();

    return 0;
}
