#include <bits/stdc++.h>
using namespace std;

class Handler
{
public:
    virtual void handleRequest(string &request) = 0;
};

class ConcreteHandler1 : public Handler
{
public:
    void handleRequest(string &request)
    {
        if (request == "Handler1")
        {
            cout << "ConcreteHandler1 is handling the request." << endl;
        }
        else if (nextHandler)
        {
            nextHandler->handleRequest(request);
        }
        else
        {
            cout << "No handler can process the request." << endl;
        }
    }

    void setNextHandler(Handler *handler)
    {
        nextHandler = handler;
    }

private:
    Handler *nextHandler = nullptr;
};

class ConcreteHandler2 : public Handler
{
public:
    void handleRequest(string &request)
    {
        if (request == "Handler2")
        {
            cout << "ConcreteHandler2 is handling the request." << endl;
        }
        else if (nextHandler)
        {
            nextHandler->handleRequest(request);
        }
        else
        {
            cout << "No handler can process the request." << endl;
        }
    }

    void setNextHandler(Handler *handler)
    {
        nextHandler = handler;
    }

private:
    Handler *nextHandler = nullptr;
};

int main()
{
    ConcreteHandler1 handler1;
    ConcreteHandler2 handler2;

    handler1.setNextHandler(&handler2);

    handler1.handleRequest("Handler1"); // ConcreteHandler1 handles the request
    handler1.handleRequest("Handler2"); // ConcreteHandler2 handles the request
    handler1.handleRequest("Handler3"); // No handler can process the request

    return 0;
}
