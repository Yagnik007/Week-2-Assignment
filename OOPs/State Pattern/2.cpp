#include <bits/stdc++.h>
using namespace std;

class States {
public:
	virtual void alert() = 0;
};

class StateA : public States {
public:
	void alert()
	{
		  cout << "in StateA..." <<   endl;
	}
};

class StateB : public States {
public:
	void alert()
	{
		  cout << "in StateB..." <<   endl;
	}
};

class Context {
private:
	States* currentState;

public:
	Context() { currentState = new StateA(); }

	void setState(States* state)
	{
		currentState = state;
	}

	void alert() { currentState->alert(); }
};

int main()
{
	Context stateContext;
	stateContext.alert();
	stateContext.setState(new StateB());
	stateContext.alert();
	return 0;
}