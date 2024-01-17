#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    virtual void displayInfo() const = 0;
};

class Car : public Vehicle
{
public:
    void displayInfo() const override
    {
        cout << "Car: A four-wheeled vehicle." << endl;
    }
};

class Motorcycle : public Vehicle
{
public:
    void displayInfo() const override
    {
        cout << "Motorcycle: A two-wheeled vehicle." << endl;
    }
};

class VehicleFactory
{
public:
    virtual Vehicle *createVehicle() const = 0;
};

class CarFactory : public VehicleFactory
{
public:
    Vehicle *createVehicle() const override
    {
        return new Car();
    }
};

class MotorcycleFactory : public VehicleFactory
{
public:
    Vehicle *createVehicle() const override
    {
        return new Motorcycle();
    }
};

int main()
{

    VehicleFactory *carFactory = new CarFactory();
    Vehicle *car = carFactory->createVehicle();
    car->displayInfo();

    VehicleFactory *motorcycleFactory = new MotorcycleFactory();
    Vehicle *motorcycle = motorcycleFactory->createVehicle();
    motorcycle->displayInfo();

    return 0;
}
