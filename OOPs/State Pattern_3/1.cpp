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

int main()
{
    
}
