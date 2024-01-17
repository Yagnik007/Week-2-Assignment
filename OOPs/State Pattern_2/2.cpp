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

class RedState : public LightState
{
public:
    void handle(TrafficLight &context) const override;
};

class YellowState : public LightState
{
public:
    void handle(TrafficLight &context) const override;
};

class GreenState : public LightState
{
public:
    void handle(TrafficLight &context) const override;
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


void RedState::handle(TrafficLight &context) const
{
    cout << "Traffic Light is RED. Stop!" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    context.setState(new GreenState());
}

void YellowState::handle(TrafficLight &context) const
{
    cout << "Traffic Light is YELLOW. Prepare to stop!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    context.setState(new RedState());
}

void GreenState::handle(TrafficLight &context) const
{
    cout << "Traffic Light is GREEN. Go!" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    context.setState(new YellowState());
}

int main()
{
    TrafficLight trafficLight;

    for (int i = 0; i < 5; ++i)
    {
        trafficLight.changeState();
    }

    return 0;
}
