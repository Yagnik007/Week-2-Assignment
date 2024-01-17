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

class LogManager
{
public:
    LogManager()
    {

        consoleLogger = new ConsoleLogger();
        fileLogger = new FileLogger();
        emailLogger = new EmailLogger();

        consoleLogger->logMessage("Logger chain set up: Console -> File -> Email");
        consoleLogger->logMessage("");
    }

    void logMessage(const string &message)
    {
        consoleLogger->logMessage("Logging message: " + message);
        fileLogger->logMessage("Logging message: " + message);
        emailLogger->logMessage("Logging message: " + message);
        consoleLogger->logMessage("");
    }

private:
    Logger *consoleLogger;
    Logger *fileLogger;
    Logger *emailLogger;
};

int main()
{

    LogManager logManager;

    logManager.logMessage("Error: Unable to open file.");
    logManager.logMessage("Information: Application started.");
    logManager.logMessage("Warning: Low disk space.");

    return 0;
}
