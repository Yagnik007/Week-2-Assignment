#include <iostream>
#include <string>
using namespace std;

class TextComponent
{
public:
    virtual void display() const = 0;
};

class SimpleText : public TextComponent
{
public:
    SimpleText(const string &content) : content(content) {}

    void display() const override
    {
        cout << content;
    }

private:
    string content;
};

class TextDecorator : public TextComponent
{
public:
    TextDecorator(TextComponent *component) : component(component) {}

    void display() const override
    {
        component->display();
    }

private:
    TextComponent *component;
};

class BoldText : public TextDecorator
{
public:
    BoldText(TextComponent *component) : TextDecorator(component) {}

    void display() const override
    {
        cout << "<b>";
        TextDecorator::display();
        cout << "</b>";
    }
};

class ItalicText : public TextDecorator
{
public:
    ItalicText(TextComponent *component) : TextDecorator(component) {}

    void display() const override
    {
        cout << "<i>";
        TextDecorator::display();
        cout << "</i>";
    }
};

int main()
{

    TextComponent *simpleText = new SimpleText("Hello, World!");

    TextComponent *boldText = new BoldText(simpleText);
    TextComponent *italicBoldText = new ItalicText(boldText);

    cout << "Simple Text: ";
    simpleText->display();
    cout << endl;

    cout << "Bold Text: ";
    boldText->display();
    cout << endl;

    cout << "Italic and Bold Text: ";
    italicBoldText->display();
    cout << endl;

    return 0;
}
