#include <bits/stdc++.h>
using namespace std;

int func(int i, int j, string s, string t, vector<vector<int>>&dp)
{
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i] == t[j]) return dp[i][j] = func(i-1,j-1,s,t,dp);
        int de = func(i-1,j,s,t,dp);
        int ins = func(i,j-1,s,t,dp);
        int rep = func(i-1,j-1,s,t,dp);
        return dp[i][j] = 1 + min(de,min(ins,rep));
}

int main()
{
    string s,t;
    cout<<"Enter the first string: ";
    cin>>s;
    cout<<"Enter the second string: ";
    cin>>t;
    vector<vector<int>> dp(s.size(), vector<int>(t.size(),-1));
    cout<<"Distance needed to edit is: "<<func(s.size()-1,t.size()-1,s,t,dp)<<endl;
}