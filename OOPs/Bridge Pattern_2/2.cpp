#include <iostream>
#include <string>
using namespace std;

class DrawingAPI
{
public:
    virtual void drawCircle(double x, double y, double radius) const = 0;
    virtual void drawSquare(double x, double y, double side) const = 0;
};

class DrawingAPI1 : public DrawingAPI
{
public:
    void drawCircle(double x, double y, double radius) const override
    {
        cout << "API1 Drawing Circle at (" << x << ", " << y << ") with radius " << radius << endl;
    }

    void drawSquare(double x, double y, double side) const override
    {
        cout << "API1 Drawing Square at (" << x << ", " << y << ") with side " << side << endl;
    }
};

class DrawingAPI2 : public DrawingAPI
{
public:
    void drawCircle(double x, double y, double radius) const override
    {
        cout << "API2 Drawing Circle at (" << x << ", " << y << ") with radius " << radius << endl;
    }

    void drawSquare(double x, double y, double side) const override
    {
        cout << "API2 Drawing Square at (" << x << ", " << y << ") with side " << side << endl;
    }
};

class Shape
{
public:
    virtual void draw() const = 0;
};

class Circle : public Shape
{
public:
    Circle(double x, double y, double radius, DrawingAPI *drawingAPI)
        : x(x), y(y), radius(radius), drawingAPI(drawingAPI) {}

    void draw() const override
    {
        drawingAPI->drawCircle(x, y, radius);
    }

private:
    double x, y, radius;
    DrawingAPI *drawingAPI;
};

class Square : public Shape
{
public:
    Square(double x, double y, double side, DrawingAPI *drawingAPI)
        : x(x), y(y), side(side), drawingAPI(drawingAPI) {}

    void draw() const override
    {
        drawingAPI->drawSquare(x, y, side);
    }

private:
    double x, y, side;
    DrawingAPI *drawingAPI;
};

int main()
{

    DrawingAPI *api1 = new DrawingAPI1();
    DrawingAPI *api2 = new DrawingAPI2();

    Shape *circle1 = new Circle(1, 2, 3, api1);
    Shape *circle2 = new Circle(4, 5, 6, api2);
    Shape *square1 = new Square(7, 8, 9, api1);
    Shape *square2 = new Square(10, 11, 12, api2);

    circle1->draw();
    circle2->draw();
    square1->draw();
    square2->draw();

    return 0;
}
