#include <bits/stdc++.h>
using namespace std;

class Logger
{
private:
    Logger() {}
    static Logger *instance;

public:
    static Logger *getInstance()
    {
        if (instance == nullptr)
        {
            instance = new Logger();
        }
        return instance;
    }

    void logMessage(const string &message)
    {
        cout << "Log: " << message << endl;
    }
};

Logger *Logger::instance = nullptr;

int main()
{
    Logger *loggerInstance = Logger::getInstance();
    loggerInstance->logMessage("Message A");
    loggerInstance->logMessage("Message B");

    Logger *anotherInstance = Logger::getInstance();

    if (loggerInstance == anotherInstance)
    {
        cout << "Both pointers point to the same instance." << endl;
    }

    return 0;
}
