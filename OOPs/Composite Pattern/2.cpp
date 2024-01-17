#include <bits/stdc++.h>
using namespace std;

class Component
{
public:
    virtual void display() const = 0;
};

class Leaf : public Component
{
public:
    Leaf(const string &name) : name(name) {}

    void display() const override
    {
        cout << "Leaf: " << name << endl;
    }

private:
    string name;
};

class Composite : public Component
{
public:
    void add(Component *component)
    {
        children.push_back(component);
    }

    void remove(Component *component)
    {
    }

    void display() const override
    {
        cout << "Composite:" << endl;
        for (const auto &child : children)
        {
            child->display();
        }
    }

private:
    vector<Component *> children;
};

int main()
{

    Leaf *leaf1 = new Leaf("Leaf 1");
    Leaf *leaf2 = new Leaf("Leaf 2");
    Leaf *leaf3 = new Leaf("Leaf 3");

    Composite *composite = new Composite();
    composite->add(leaf1);
    composite->add(leaf2);

    Composite *anotherComposite = new Composite();
    anotherComposite->add(leaf3);
    anotherComposite->add(composite);

    cout << "Displaying all components:" << endl;
    anotherComposite->display();

    delete anotherComposite;

    return 0;
}
