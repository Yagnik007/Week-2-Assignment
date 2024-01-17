#include <bits/stdc++.h>
using namespace std;

class Color
{
public:
    virtual void fill() = 0;
};

class Red : public Color
{
public:
    void fill()
    {
        cout << "Fill with Red color." << endl;
    }
};

class Blue : public Color
{
public:
    void fill()
    {
        cout << "Fill with Blue color." << endl;
    }
};

int main()
{
    return 0;
}
