#include <iostream>
#include <string>
using namespace std;

class DrawingAPI
{
public:
    virtual void drawCircle(double x, double y, double radius) const = 0;
    virtual void drawSquare(double x, double y, double side) const = 0;
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
    
}
