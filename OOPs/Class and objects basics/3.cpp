#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;

public:
    Car(const string &carMake, const string &carModel, int carYear)
        : make(carMake), model(carModel), year(carYear) {}

    void displayDetails()
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{

    Car myCar("Toyota", "Camry", 2022);

    myCar.displayDetails();

    return 0;
}
