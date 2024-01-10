#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    printf("Sum of the digits is: %d", sum);
    return 0;
}