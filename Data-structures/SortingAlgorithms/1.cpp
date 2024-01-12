#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool f;
    for (i = 0; i < n - 1; i++)
    {
        f = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                f = true;
            }
        }

        if (f == false)
            break;
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
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array: ";
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    bubbleSort(a, n);
    cout << "Sorted array: \n";
    printArray(a, n);
    return 0;
}
