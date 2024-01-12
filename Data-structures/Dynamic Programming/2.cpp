#include <bits/stdc++.h>
using namespace std;

int func(vector<vector<int>>& dp, int pre, int i, vector<int>& a)
{
    if(i == a.size()) return 0;
    if(dp[i][pre+1]!=-1) return dp[i][pre+1];
    int notTake = func(dp,pre,i+1,a);
    int take = 0;
    if(pre == -1 or a[pre] < a[i])
    {
        take  = 1 + func(dp,i,i+1,a);
    }
    return dp[i][pre+1] = max(take, notTake);
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++) cin>>a[i];
    vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
    cout<<"Longest Increasing Subsequence in this array is: "<<func(dp,-1,0,a)<<endl;
}