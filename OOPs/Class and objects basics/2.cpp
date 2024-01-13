#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(const std::string &n, int a)
        : name(n), age(a) {}

    void displayDetails()
    {
        cout << "Make: " << name << endl;
        cout << "Year: " << age << endl;
    }
};

int main()
{

    Person person1("Yagnik", 2002);

    person1.displayDetails();

    return 0;
}
