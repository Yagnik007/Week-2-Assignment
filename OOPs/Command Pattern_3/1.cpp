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

int main()
{
    
}