#include <bits/stdc++.h>
using namespace std;

class Engine
{
private:
    int horsePower;

public:
    Engine(int horsePower) : horsePower(horsePower) {}

    void speed()
    {
        cout << "If the horsepower of the car is " << horsePower << " than the Max speed of the car will be 200." << endl;
    }
};

class Car
{
    private:
        string color;
        int weight;
        Engine engine;

    public:
    Car(string color, int weight, int horsePower) : color(color), weight(weight), engine(horsePower) {}

    void speed()
    {
        cout<<"The color of the car is "<<color<<" and the weight of the car is "<<weight<<". ";
        engine.speed(); 
    }
};

int main()
{
    Car c("red", 1000, 90);
    c.speed();
}