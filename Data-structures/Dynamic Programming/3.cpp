#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& dp, vector<int>& d, int v)
{
    if(v == 0) return 0;
    if(v < 0) return 1e8;
    for(auto coin: d)
    {
        dp[v] = min(dp[v], 1 + func(dp,d,v-coin));
    }
    return dp[v];
}

int main()
{
    int n;
    cout<<"Enter the size of the array of denomination: "<<endl;
    cin>>n;
    vector<int> d(n);
    cout<<"Enter the array of denominations: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>d[i];
    }
    cout<<"Enter the value: "<<endl;
    int v; cin>>v;
    vector<int> dp(v+1,1e8);
    func(dp,d,v);
    if(dp[v] == 1e8)
    {
        cout<<"We cannot create any permutation of this value with this denominations of coins"<<endl;
    }
    else{
        cout<<"Least number of coins required for this value is: "<<dp[v]<<endl;
    }
    return 0;
}