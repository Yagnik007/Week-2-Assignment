#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int k;
    cout<<"Enter the k: ";
    cin>>k;
    cout<<"Enter the array: ";
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    cout<<"Smallest kth element in the array is "<<a[k-1]<<" and the largest kthe element in the array is "<<a[n-k-1]<<endl;
}