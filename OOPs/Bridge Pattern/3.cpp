#include <bits/stdc++.h>
using namespace std;

class Color
{
public:
    virtual void fill() = 0;
};

class Red : public Color
{
public:
    void fill()
    {
        cout << "Fill with Red color." << endl;
    }
};

class Blue : public Color
{
public:
    void fill()
    {
        cout << "Fill with Blue color." << endl;
    }
};

class Shape
{
public:
    Shape(Color *color) : color(color) {}

    virtual void draw() = 0;

    void setColor(Color *newColor)
    {
        color = newColor;
    }

    virtual ~Shape()
    {
        delete color;
    }

protected:
    Color *color;
};

class Circle : public Shape
{
public:
    using Shape::Shape;

    void draw()
    {
        cout << "Draw Circle ";
        color->fill();
    }
};

class Square : public Shape
{
public:
    using Shape::Shape;

    void draw()
    {
        cout << "Draw Square ";
        color->fill();
    }
};

int main()
{

    Color *redColor = new Red();
    Color *blueColor = new Blue();

    Shape *redCircle = new Circle(redColor);
    Shape *blueSquare = new Square(blueColor);

    redCircle->draw();
    cout << endl;
    blueSquare->draw();
    cout << endl;

    redCircle->setColor(blueColor);

    redCircle->draw();

    delete redCircle;
    delete blueSquare;

    return 0;
}
