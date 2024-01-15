    #include <bits/stdc++.h>
#define pi 3.141592
using namespace std;

class Shape
{
    public:
        virtual void calculateArea() = 0; //abstract class
};

class Rectangle : public Shape{

private:
    double length;
    double width;

public:
    Rectangle()
    {
        cout << "Enter the length and width: ";
        cin >> length >> width;
    }

    void calculateArea()
    {
        cout<<length*width<<endl;
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
    }

    void calculateArea()
    {
        cout<<2*pi*radius<<endl;
    }

};

int main()
{
    Circle c;
    c.calculateArea();
    Rectangle r;
    r.calculateArea();
    return 0;
}
