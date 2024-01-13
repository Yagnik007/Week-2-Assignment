#include <iostream>

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
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override
    {
        return length * width;
    }

    double calculatePerimeter() const override
    {
        return 2 * (length + width);
    }
};

int main()
{

    Rectangle rectangle(4.0, 6.0);

    std::cout << "Rectangle - Area: " << rectangle.calculateArea() << ", Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    return 0;
}
