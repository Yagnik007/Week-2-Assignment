#include <stdio.h>

int main()
{
    int n;
    printf("Enter the height of the Number triangle: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=i+1; j++)
        {
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}