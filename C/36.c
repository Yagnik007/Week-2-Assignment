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
    for(int i=0; i<n; i++)
    {
        if(num == arr[i])
        {
            printf("%d found at index %d.",  num, i);
            return 0;
        }
    }
    printf("Number not found in the array.");
    return 0;
}