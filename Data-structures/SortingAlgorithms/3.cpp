#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
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
    insertionSort(a, n);
    cout << "Sorted array: \n";
    printArray(a, n);
    return 0;
}
