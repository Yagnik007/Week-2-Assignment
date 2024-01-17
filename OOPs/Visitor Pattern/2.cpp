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

class ElementA : public Element
{
public:
    void accept(Visitor &visitor) const override
    {
        visitor.visitElementA(*this);
    }

    void operationA() const
    {
        cout << "ElementA operationA" << endl;
    }
};

class ElementB : public Element
{
public:
    void accept(Visitor &visitor) const override
    {
        visitor.visitElementB(*this);
    }

    void operationB() const
    {
        cout << "ElementB operationB" << endl;
    }
};

class ConcreteVisitor : public Visitor
{
public:
    void visitElementA(const ElementA &elementA) const override
    {
        cout << "ConcreteVisitor visits ElementA." << endl;
        elementA.operationA();
    }

    void visitElementB(const ElementB &elementB) const override
    {
        cout << "ConcreteVisi]tor visits ElementB." << endl;
        elementB.operationB();
    }
};

int main()
{

    ElementA elementA;
    ElementB elementB;

    ConcreteVisitor visitor;

    elementA.accept(visitor);
    elementB.accept(visitor);

    return 0;
}
