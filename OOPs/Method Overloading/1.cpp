#include <bits/stdc++.h>
using namespace std;

class Calculator
{
public:
    int add(int x, int y)
    {
        return x + y;
    }
    int add(int x, int y, int z)
    {
        return x + y + z;
    }
};

int main(void)
{
    Calculator c;
    cout << c.add(2, 3) << endl;
    cout << c.add(2, 3, 6) << endl;
    return 0;
}