#include <bits/stdc++.h>
using namespace std;

class Machine {
public:
	virtual void getstate() = 0;
};

class hascoin : public Machine {
public:
	void getstate()
	{
		cout << "has coin..." << endl;
	}
};

class nocoin : public Machine {
public:
	void getstate()
	{
		cout << "no coin..." << endl;
	}
};

class Context {
private:
	Machine* currentState;

public:
	Context() { currentState = new nocoin(); }

	void setState(Machine* state)
	{
		currentState = state;
	}

	void getstate() { currentState->getstate(); }
};

int main()
{
	Context stateContext;
	stateContext.getstate();
	stateContext.setState(new hascoin());
	stateContext.getstate();
	return 0;
}
