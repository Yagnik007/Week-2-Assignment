#include <bits/stdc++.h>
using namespace std;

int func(vector<vector<int>>&dp, string s, string t, int n, int m)
{
    if(n == 0 or m == 0)
    {
        
    }
}

int main()
{
    string s,t;
    cout<<"Enter the first string: ";
    cin>>s;
    cout<<"Enter the second string: ";
    cin>>t;
    vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1,-1));
    cout<<"Distance needed to edit is: "<<func(dp,s,t,s.size(),t.size())<<endl;
}