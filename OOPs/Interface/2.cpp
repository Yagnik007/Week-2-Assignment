#include <bits/stdc++.h>
#define pi 3.1415
using namespace std;

class Drawable
{
public:
    virtual void draw() = 0;
};

class Rectangle : public Drawable
{
private:
    double length, breadth;

public:
    Rectangle(double length, double breadth) : length(length), breadth(breadth) {}
    void draw()
    {
        cout << "Area of the rectangle is "<<length*breadth<<endl;
    }
};

class Circle : public Drawable
{
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}
    void draw()
    {
        cout << "Area of the Circle is "<<pi*radius*radius<<endl;
    }
};

int main()
{
    Rectangle r(4,5);
    Circle c(10.99);
    r.draw();
    c.draw();
    return 0;
}