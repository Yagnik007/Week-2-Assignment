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
    int fir = -1, ls = -1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(key == a[i])
        {
            fir = i;
            while(i<n and (a[i] == key))
            {
                i++;
            }
            if(i == n) ls = n-1;
            else ls = i-1;
            break;
        }
    }
    if(fir == -1) cout<<"Element not found"<<endl;
    else{
        cout<<"First index of key is "<<fir<<" and the last index of key is "<<ls<<endl;
    }
}