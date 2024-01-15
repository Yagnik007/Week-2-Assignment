#include <bits/stdc++.h>
#define pi 3.141592
using namespace std;

class Shape
{
    public:
        virtual void calculateArea() = 0; //abstract class
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
    return 0;
}
