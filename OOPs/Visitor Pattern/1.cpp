#include <bits/stdc++.h>
using namespace std;

class Visitor;

class Element
{
public:
    virtual void accept(Visitor &visitor) const = 0;
};

class Visitor
{
public:
    virtual void visitElementA(const class ElementA &elementA) const = 0;
    virtual void visitElementB(const class ElementB &elementB) const = 0;
};


int main()
{
    
}