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

int main()
{
    return 0;
}
