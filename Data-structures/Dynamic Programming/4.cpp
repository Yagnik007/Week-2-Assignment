#include <bits/stdc++.h>
using namespace std;

int func(vector<vector<int>>&dp, string s, string t, int n, int m)
{
    if(n == 0 or m == 0)
    {
        return 0;
    }
    if(dp[n][m] != -1) return dp[n][m];
    if(s[n-1] == t[m-1])
    {
        return dp[n][m] = 1 + func(dp,s,t,n-1,m-1);
    }
    return dp[n][m] = max(func(dp,s,t,n-1,m),func(dp,s,t,n,m-1));
}

int main()
{
    string s,t;
    cout<<"Enter the first string: ";
    cin>>s;
    cout<<"Enter the second string: ";
    cin>>t;
    vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1,-1));
    cout<<"Longest common subsequence of two strings is: "<<func(dp,s,t,s.size(),t.size())<<endl;
}