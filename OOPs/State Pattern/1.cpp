#include <bits/stdc++.h>
using namespace std;

class States {
public:
	virtual void alert() = 0;
};


int main()
{
	Context stateContext;
	stateContext.alert();
	stateContext.setState(new StateB());
	stateContext.alert();
	return 0;
}