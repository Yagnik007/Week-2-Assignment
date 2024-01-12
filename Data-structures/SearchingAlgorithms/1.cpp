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
        if(a[i] == key) 
        {
            f = 1;
            in = i;
        }
    }
    if(f) cout<<"Key found at index "<<in<<endl;
    else cout<<"Key not found"<<endl;
}