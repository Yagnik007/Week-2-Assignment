#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,key;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the key to be found: ";
    cin>>key;
    vector<int> a(n);
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int l = 0, h = n-1;
    while(l<=h)
    {
        int pos = l + ((key - a[l])/(a[h] - a[l]))*(h-l);
        if(a[pos] == key)
        {
            cout<<"Key found at index: "<<pos<<endl;
            return 0;
        }
        else if(a[pos] > key)
        {
            h = pos - 1;
        }
        else l = pos + 1;
    }
    cout<<"Key not found"<<endl;
}