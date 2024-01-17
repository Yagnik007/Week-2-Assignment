#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Animal
{
public:
    virtual Animal *clone() const = 0;
    virtual void makeSound() const = 0;
};

class Dog : public Animal
{
public:
    Animal *clone() const override
    {
        return new Dog(*this);
    }

    void makeSound() const override
    {
        cout << "Dog says Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    Animal *clone() const override
    {
        return new Cat(*this);
    }

    void makeSound() const override
    {
        cout << "Cat says Meow!" << endl;
    }
};

class AnimalFarm
{
private:
    static unordered_map<string, Animal *> prototypes;

public:
    static void addPrototype(const string &key, Animal *prototype)
    {
        prototypes[key] = prototype;
    }

    static Animal *createAnimal(const string &key)
    {
        auto it = prototypes.find(key);
        if (it != prototypes.end())
        {
            return it->second->clone();
        }
        else
        {
            cout << "Unknown animal type: " << key << endl;
            return nullptr;
        }
    }
};

unordered_map<string, Animal *> AnimalFarm::prototypes;

int main()
{

    AnimalFarm::addPrototype("Dog", new Dog());
    AnimalFarm::addPrototype("Cat", new Cat());

    Animal *dog1 = AnimalFarm::createAnimal("Dog");
    Animal *cat1 = AnimalFarm::createAnimal("Cat");

    Animal *dog2 = dog1->clone();
    Animal *cat2 = cat1->clone();

    dog1->makeSound();
    cat1->makeSound();

    dog2->makeSound();
    cat2->makeSound();

    delete dog1;
    delete cat1;
    delete dog2;
    delete cat2;

    return 0;
}
