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

int main()
{
    
}
