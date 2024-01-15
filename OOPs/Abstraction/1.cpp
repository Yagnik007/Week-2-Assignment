#include <bits/stdc++.h>
#define pi 3.141592
using namespace std;

class Creatures
{
    public:
        virtual void eat() = 0; //abstract class
        virtual void sound() = 0;
};

class Animal : public Creatures{

private:
    string food;
    string voice;

public:
    Animal()
    {
        cout << "Enter the food: ";
        cin >> food;
        cout << "Enter the sound: ";
        cin >> voice;
    }

    void eat()
    {
        cout<<"Animal eats "<<food<<endl;
        
    }
    void sound()
    {
        cout<<"Animal sounds like "<<voice<<endl;
    }

};

int main()
{
    Animal a;
    a.eat();
    a.sound();
    return 0;
}
