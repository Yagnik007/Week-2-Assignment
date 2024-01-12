#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, id;
    for (i = 0; i < n - 1; i++)
    {

        id = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[id])
                id = j;
        }

        if (id != i)
            swap(arr[id], arr[i]);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << " " << arr[i];
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
    selectionSort(a, n);
    cout << "Sorted array: \n";
    printArray(a, n);
    return 0;
}
