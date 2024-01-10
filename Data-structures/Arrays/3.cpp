#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++) 
    {
        cin>>v[i];
    }
    for(int i=0; i<n/2; i++)
    {
        swap(v[i], v[n-1-i]);
    }
    cout<<"Reversed Array: ";
    for(auto a: v) cout<<a<<" ";
}