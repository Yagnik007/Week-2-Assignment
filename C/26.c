#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factors of the number: ");
    for(int i=1; i<=n/2 + 1; i++)
    {
        if(n%i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}