#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the array: ";
    int maxi = 0;
    for(int i=0; i<n; i++) 
    {
        cin>>v[i];
        maxi = max(maxi ,v[i]);
    }
    cout<<maxi<<endl;
}