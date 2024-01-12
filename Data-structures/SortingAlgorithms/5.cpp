#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int h)
{
    int piv = a[h];
    int i = (l - 1);
    for (int j = l; j <= h; j++)
    {
        if (a[j] < piv)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[h]);
    return (i + 1);
}

void quickSort(int a[], int l, int h)
{
    if (l < h)
    {
        int piv = partition(a, l, h);
        quickSort(a, l, piv - 1);
        quickSort(a, piv + 1, h);
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
    quickSort(a, 0, n-1);
    cout << "Sorted array: \n";
    printArray(a, n);
    return 0;
}
