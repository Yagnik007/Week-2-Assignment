#include <iostream>
#include <stack>
using namespace std;

void moveDisk(stack<int> &source, stack<int> &target, char s, char t)
{
    int disk = source.top();
    source.pop();
    target.push(disk);
    cout << "Move disk " << disk << " from " << s << " to " << t << endl;
}

void towerOfHanoi(int disks, stack<int> &source, stack<int> &target, stack<int> &auxiliary, char s, char t, char a)
{
    if (disks == 1)
    {
        moveDisk(source, target, s, t);
        return;
    }
    towerOfHanoi(disks - 1, source, auxiliary, target, s, a, t);
    moveDisk(source, target, s, t);
    towerOfHanoi(disks - 1, auxiliary, target, source, a, t, s);
}

int main()
{
    cout<<"Enter the number of Disks: ";
    int n; cin>>n; 
    stack<int> source, target, auxiliary;
    for (int i = n; i >= 1; --i)
    {
        source.push(i);
    }
    char sn = 'A', tn = 'C', an = 'B';

    towerOfHanoi(n, source, target, auxiliary, sn, tn, an);

    return 0;
}
