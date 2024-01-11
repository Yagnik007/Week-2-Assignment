#include <stdio.h>

int main()
{
    int n;
    printf("Enter the row of the matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the matrix: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i][i];
        sum+=a[i][n-i-1];
    }
    sum-=a[n/2][n/2];
    printf("Sum of the diagonals is: %d", sum);
    return 0;
}