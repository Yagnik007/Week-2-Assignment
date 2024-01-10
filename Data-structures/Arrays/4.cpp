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
    cout<<"Enter the first array: ";
    int ans = -1;
    for(int i=0; i<n; i++) {cin>>x; mp[x]++;}
    cout<<"Enter the second array: ";
    for(int i=0; i<m; i++) {cin>>x; if(mp.find(x)!=mp.end()) ans = x;}
    cout<<"Intersection of the two arrays is: "<<ans<<endl;
}