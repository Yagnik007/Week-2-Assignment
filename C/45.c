#include <stdio.h>

int main()
{
    int n;
    printf("Enter the length of the matrix: ");
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
    // 1 0 0 0
    // 1 1 0 0
    // 1 1 1 0
    // 1 1 1 1
    int k = 1;
    for(int i=0; i<n-1; i++)
    {
        for(int j=k; j<n; j++)
        {
            if(a[i][j]!=0)
            {
                printf("Matrix not LowerTriangular");
                return 0;
            }
        }
        k++;
    }
    printf("Matrix LowerTriangular");
    return 0;
}