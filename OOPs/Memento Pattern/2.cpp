#include <bits/stdc++.h>
using namespace std;

class Originator
{
private:
    string state;

public:
    void setState(const string &newState)
    {
        state = newState;
    }

    string getState() const
    {
        return state;
    }

    class Memento
    {
    private:
        string savedState;

    public:
        Memento(const string &stateToSave) : savedState(stateToSave) {}

        string getSavedState() const
        {
            return savedState;
        }
    };

    class Caretaker
    {
    private:
        vector<Memento> mementos;

    public:
        void addMemento(const Memento &memento)
        {
            mementos.push_back(memento);
        }

        Memento getMemento(int index) const
        {
            return mementos[index];
        }
    };

    Memento createMemento() const
    {
        return Memento(state);
    }

    void restoreFromMemento(const Memento &memento)
    {
        state = memento.getSavedState();
    }
};

int main()
{

    Originator originator;
    Originator::Caretaker caretaker;

    caretaker.addMemento(originator.createMemento());

    originator.setState("New State");

    caretaker.addMemento(originator.createMemento());

    originator.restoreFromMemento(caretaker.getMemento(0));

    cout << "Current State: " << originator.getState() << "\n";

    return 0;
}