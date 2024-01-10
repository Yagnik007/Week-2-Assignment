#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the Pivot: ";
    cin>>k;
    vector<int> v(n);
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++) 
    {
        cin>>v[i];
    }
    k=k%v.size();
    reverse(v.begin(),v.begin()+(n-k));
    reverse(v.begin()+(n-k),v.end());
    reverse(v.begin(),v.end());
    for(auto a: v) cout<<a<<" ";
}