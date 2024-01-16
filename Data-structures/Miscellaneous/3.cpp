#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int> m;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array: ";
    int maxii = -1, maxi = 0;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        m[x]++;
        if(m[x] > maxi)
        {
            maxi = m[x];
            maxii = x;
        }
    }
    cout<<"Majority element in the array is: "<<maxii<<endl;
}