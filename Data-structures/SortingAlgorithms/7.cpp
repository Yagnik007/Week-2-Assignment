#include <bits/stdc++.h>
using namespace std;

void countingSort(int a[], int n)
{
    map<int,int> m;
    for(int i=0; i<n; i++) m[a[i]]++;
    int i = 0;
    for(auto it: m)
    {
        int x = it.second;
        while(x--)
        {
            a[i++] = it.first;
        }
    }
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << " " << a[i];
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array: ";
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    countingSort(a, n);
    cout << "Sorted array: \n";
    printArray(a, n);
    return 0;
}
