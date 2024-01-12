#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the size of the first array: ";
    cin>>n;
    cout<<"Enter the size of the second array: ";
    cin>>m;
    cout<<"Enter the first array: ";
    unordered_map<int,int> mp;
    int x;
    for(int i=0; i<n; i++) {cin>>x; mp[x]++;}
    cout<<"Enter the second array: ";
    for(int i=0; i<m; i++) {cin>>x; mp[x]++;}
    for(auto a: mp)
    {
        if(a.second >= 2)
        {
            cout<<"Intersection of the arrays is: "<<a.first<<endl;
            return 0;
        }
    }
    cout<<"Intersection not found"<<endl;
}