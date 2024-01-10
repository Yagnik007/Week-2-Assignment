#include <stdio.h>

void decimalToBinaryNumber(int n)
{
    int arr[32];
    int ind = 0;
    while(n)
    {
        arr[ind++] = n%2;
        n/=2;
    }
    for(int i=ind-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    decimalToBinaryNumber(n);
    return 0;
}