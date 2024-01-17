#include <bits/stdc++.h>
using namespace std;

class Command
{
public:
    virtual void execute() = 0;
};

class RemoteControl
    {
    private:
        vector<Command *> commands;

    public:
        void setCommand(Command *command)
        {
            commands.push_back(command);
        }

        void pressButton()
        {
            for (Command *command : commands)
            {
                command->execute();
            }
        }
    };

class Light
{
public:
    void turnOn()
    {
        cout << "Light is ON.\n";
    }

    void turnOff()
    {
        cout << "Light is OFF.\n";
    }
};

class LightOnCommand : public Command
{
private:
    Light *light;

public:
    LightOnCommand(Light *light) : light(light) {}

    void execute()       
    {
        light->turnOn();
    }
};

class LightOffCommand : public Command
{
private:
    Light *light;

public:
    LightOffCommand(Light *light) : light(light) {}

    void execute()       
    {
        light->turnOff();
    }
};

int main()
{

    Light *livingRoomLight = new Light();
    Command *lightOn = new LightOnCommand(livingRoomLight);
    Command *lightOff = new LightOffCommand(livingRoomLight);

    RemoteControl remote;
    remote.setCommand(lightOn);
    remote.setCommand(lightOff);

    remote.pressButton();
    return 0;
}
