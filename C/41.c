#include <stdio.h>

int main()
{
    int n;
    printf("Enter the row length of the array: ");
    scanf("%d", &n);
    int m;
    printf("Enter the column length of the array: ");
    scanf("%d", &m);
    int a[n][m];
    printf("Enter the first array: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second array: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            scanf("%d", &x);
            a[i][j]-=x;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", a[i][j]);
        }printf("\n");
    }
    return 0;
}