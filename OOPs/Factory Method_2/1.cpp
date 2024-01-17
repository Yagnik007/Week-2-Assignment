#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    virtual void displayInfo() const = 0;
};

class VehicleFactory
{
public:
    virtual Vehicle *createVehicle() const = 0;
};


int main()
{
    return 0;
}
