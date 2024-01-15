#include <bits/stdc++.h>
#define pi 3.141592
using namespace std;

class Shape
{
public:
    double area;
    double perimeter;
    void showArea()
    {
        cout<<"Area: "<<area<<endl;
    }
    void showPerimeter()
    {
        cout<<"Perimeter: "<<perimeter<<endl;
    }
};

class Rectangle : public Shape{

private:
    double length;
    double width;

public:
    Rectangle()
    {
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;
        area = length*width;
        perimeter = 2*(length+width);
    }
};

class Circle : public Shape{

private:
    double radius;

public:
    Circle()
    {
        cout << "Enter the radius: ";
        cin >> radius;
        area = pi*radius*radius;
        perimeter = 2*pi*radius;
    }
};

int main()
{
    Rectangle r;
    r.showArea();
    r.showPerimeter();
    Circle c;
    c.showArea();
    c.showPerimeter();
    return 0;
}
