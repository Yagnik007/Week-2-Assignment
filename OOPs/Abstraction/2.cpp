#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    virtual void breed() = 0; // abstract class
    virtual void age() = 0;
};

class Dog : public Animal
{
private:
    string breedDog;
    int ageDog;

public:
    Dog()
    {
        cout << "Enter the breed of the dog: ";
        cin >> breedDog;
        cout << "Enter the age of the dog: ";
        cin >> ageDog;
    }
    void breed()
    {
        cout << "Breed of the dog is " << breedDog << endl;
    }
    void age()
    {
        cout << "Age of the dog is " << ageDog << endl;
    }
};

class Cat : public Animal
{
private:
    string breedCat;
    int ageCat;

public:
    Cat()
    {
        cout << "Enter the breed of the cat: ";
        cin >> breedCat;
        cout << "Enter the age of the cat: ";
        cin >> ageCat;
    }
    void breed()
    {
        cout << "Breed of the cat is " << breedCat << endl;
    }
    void age()
    {
        cout << "Age of the cat is " << ageCat << endl;
    }
};

int main()
{
    Dog d;
    Cat c;
    d.breed();
    d.age();
    c.breed();
    c.age();
    return 0;
}
