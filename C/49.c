#include <stdio.h>

int main()
{
    int n;
    printf("Enter the height of the Number triangle: ");
    scanf("%d", &n);
    int k = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=i+1; j++)
        {
            printf("%d ", k++);
        }printf("\n");
    }
    return 0;
}