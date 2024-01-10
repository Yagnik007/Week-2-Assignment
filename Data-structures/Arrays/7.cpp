#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the size of first array: "<<endl;
    cin>>n;
    cout<<"Enter the size of second array: "<<endl;
    cin>>m;
    unordered_map<int,int> mp;
    vector<int> a(n), b(n);
    int x;
    cout<<"Enter the first sorted array: ";
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<"Enter the second sorted array: ";
    for(int i=0; i<m; i++) cin>>b[i];
    int i = 0, j =0;
    vector<int> ans;
    while(i<n and j<m)
    {
        if(a[i]<b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else 
        {
            ans.push_back(b[j]);
            j++;
        }
    }
    if(i == n)
    {
        while(j<m) ans.push_back(b[j++]);
    }
    else
    {
        while(i<n) ans.push_back(a[i++]);
    }
    for(auto x: ans) cout<<x<<" ";
}