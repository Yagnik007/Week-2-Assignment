#include <bits/stdc++.h>
using namespace std;

class HashMap
{
private:
    vector<int> v(1e9);

public:
    void insert(int value)
    {
        v[value]++;
    }

    void delete(int value)
    {
        v[value] = 0;
    }

    int search(int value) 
    {
        return v[value] != 0;
    }
};

int main()
{
    HashMap m;
    m.insert(3);
    m.insert(4);
    m.insert(3);
    m.insert(5);
    m.insert(100000);
    m.delete(4);
    m.search(5);
}