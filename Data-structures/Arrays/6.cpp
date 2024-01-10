#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter the size of Sorted Array: "<<endl;
    cin>>n;
    set<int> s;
    cout<<"Enter the Array: ";
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        s.insert(x);
    }
    vector<int> ans(s.begin(),s.end());
    for(auto a: ans) cout<<a<<" ";

}