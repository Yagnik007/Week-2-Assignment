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
    //1111
    //0111
    //0011
    //0001
    int k = 1;
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            if(a[i][j]!=0)
            {
                printf("Matrix not UpperTriangular");
                return 0;
            }
        }
        k++;
    }
    printf("Matrix UpperTriangular");
    return 0;
}