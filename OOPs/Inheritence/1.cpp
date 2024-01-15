#include <bits/stdc++.h>
#define pi 3.141592
using namespace std;

class Shape
{
public:
    virtual double calculateArea() const = 0;

    virtual double calculatePerimeter() const = 0;
};

class Rectangle : public Shape
{

private:
    double length;
    double width;

public:
    Rectangle()
    {
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;
        area = length * width;
        perimeter = 2 * (length + width);
    }
};

int main()
{
    Rectangle r;
    r.showArea();
    r.showPerimeter();
    return 0;
    return 0;
}