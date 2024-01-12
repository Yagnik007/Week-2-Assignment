#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& dp, int n)
{
    if(n == 0 or n == 1) return dp[n] = n;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = func(dp,n-1) + func(dp,n-2);
}

int main()
{
    int n;
    cout<<"Enter the fibonacci number to be found: ";
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<"nth fibonacci number is: "<<func(dp,n)<<endl;
}