#include <iostream>
#include <string>
using namespace std;

class Logger
{
public:
    virtual void logMessage(const string &message) = 0;
};

class ConsoleLogger : public Logger
{
public:
    void logMessage(const string &message) override
    {
        cout << "Console Log: " << message << endl;
    }
};

class FileLogger : public Logger
{
public:
    void logMessage(const string &message) override
    {
        cout << "File Log: " << message << endl;
    }
};

class EmailLogger : public Logger
{
public:
    void logMessage(const string &message) override
    {
        cout << "Email Log: " << message << endl;
    }
};

int main()
{
    
}
