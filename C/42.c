#include <stdio.h>

int main()
{
    int n1;
    printf("Enter the row length of the first matrix: ");
    scanf("%d", &n1);
    int m1;
    printf("Enter the column length of the first matrix: ");
    scanf("%d", &m1);
    int n2;
    printf("Enter the row length of the second matrix: ");
    scanf("%d", &n2);
    int m2;
    printf("Enter the column length of the second matrix: ");
    scanf("%d", &m2);
    if (m1 != n2)
    {
        printf("Matrix cannot be multiplied");
        return 0;
    }
    int a[n1][m1];
    printf("Enter the first matrix: ");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int b[n2][m2];
    printf("Enter the second matrix: ");
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int ans[n1][m2];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}