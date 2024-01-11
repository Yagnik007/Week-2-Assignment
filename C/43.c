#include <stdio.h>

int main()
{
    int n;
    printf("Enter the row length of the matrix: ");
    scanf("%d", &n);
    int m;
    printf("Enter the column length of the matrix: ");
    scanf("%d", &m);
    int a[n][m];
    printf("Enter the matrix: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int b[m][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix is: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", b[i][j]);
        }printf("\n");
    }
    return 0;
}