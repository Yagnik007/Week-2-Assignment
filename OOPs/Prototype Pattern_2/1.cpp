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


int main()
{
    return 0;
}
