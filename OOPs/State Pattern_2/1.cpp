#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

class TrafficLight;

class LightState
{
public:
    virtual void handle(TrafficLight &context) const = 0;
};

class TrafficLight
{
public:
    TrafficLight() : currentState(nullptr)
    {

        setState(new RedState());
    }

    void setState(LightState *state)
    {
        delete currentState;
        currentState = state;
    }

    void changeState()
    {
        currentState->handle(*this);
    }

private:
    LightState *currentState;
};

int main()
{
}
