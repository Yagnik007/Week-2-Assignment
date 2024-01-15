#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string mobile;
    vector<string> m;
    Person(string mobile1)
    {
        m.push_back(mobile1);
    }
    Person(string mobile1, string mobile2)
    {
        m.push_back(mobile1);
        m.push_back(mobile2);
    }
    void display()
    {
        for(auto a: m)
        {
            cout<<a<<endl;
        }
    }
};

int main()
{
    Person p("0000000000");
    Person p2("1111111111","22222222222");
    p.display();
    p2.display();
    return 0;
}