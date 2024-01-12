#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of the array: ";
    int n; cin>>n;
    int key; 
    cout<<"Enter the key: ";
    cin>>key;
    cout<<"Enter the array: ";
    vector<int> a(n);
    bool f = 0;
    int in = -1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int l = 0, r = n-1;
    while(l<=r)
    {
        int m = l+(r-l)/2;
        if(a[m] == key)
        { 
            cout<<"Key found at index "<<m<<endl;
            return 0;
        }
        else if(a[m] > key)
        {
            r = m - 1;
        }
        else l = m+1;
    }
    if(f) cout<<"Key found at index "<<in<<endl;
    else cout<<"Key not found"<<endl;
}