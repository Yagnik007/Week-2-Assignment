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
    virtual void visitParagraph(const class Paragraph &Paragraph) const = 0;
    virtual void visitImage(const class Image &Image) const = 0;
};

class Paragraph : public Element
{
public:
    void accept(Visitor &visitor) const override
    {
        visitor.visitParagraph(*this);
    }

    void operationA() const
    {
        cout << "Paragraph operationA" << endl;
    }
};

class Image : public Element
{
public:
    void accept(Visitor &visitor) const override
    {
        visitor.visitImage(*this);
    }

    void operationB() const
    {
        cout << "Image operationB" << endl;
    }
};

class ConcreteVisitor : public Visitor
{
public:
    void visitParagraph(const Paragraph &Paragraph) const override
    {
        cout << "ConcreteVisitor visits Paragraph." << endl;
        Paragraph.operationA();
    }

    void visitImage(const Image &Image) const override
    {
        cout << "ConcreteVisitor visits Image." << endl;
        Image.operationB();
    }
};

int main()
{

    Paragraph Paragraph;
    Image Image;

    ConcreteVisitor visitor;

    Paragraph.accept(visitor);
    Image.accept(visitor);

    return 0;
}
