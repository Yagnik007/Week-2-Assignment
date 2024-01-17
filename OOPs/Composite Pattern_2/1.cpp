#include <bits/stdc++.h>
using namespace std;

class Component {
public:
    virtual void add(Component* component) = 0;
    virtual void remove(Component* component) = 0;
    virtual void display() const = 0;
    virtual ~Component() {}
};

int main()
{
    
}