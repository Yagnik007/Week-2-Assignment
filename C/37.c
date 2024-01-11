#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Enter the number that needs to be found: ");
    scanf("%d", &num);
    int l = 0, r = n-1;
    while(l<=r)
    {
        int m = l+(r-l)/2;
        if(arr[m] == num)
        { 
            printf("%d found at index %d ", num, m);
            return 0;
        }
        else if(arr[m] > num)
        {
            r = m - 1;
        }
        else l = m+1;
    }
    printf("Number not found in the array.");
    return 0;
}