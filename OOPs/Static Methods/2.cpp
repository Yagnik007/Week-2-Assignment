#include <bits/stdc++.h>
using namespace std;

class MathOperations
{
public:
    static void squareroot(int n)
    {
        cout << "Squareroot of " << n << " is " << sqrt(n) << endl;
    }
};

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    //without creating an object -- useful
    MathOperations::squareroot(n);
    return 0;
}