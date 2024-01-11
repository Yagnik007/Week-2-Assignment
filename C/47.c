#include <stdio.h>

int main()
{
    int n;
    printf("Enter the height of the Pyramid: ");
    scanf("%d", &n);
    char a[n][(2*n) - 1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(2*n)-1; j++)
        {
            a[i][j] = ' ';
        }
    }
    int k = 1;
    for(int i=0; i<n; i++)
    {
        a[i][n-k] = '*';
        k++;
    }
    k=-1;
    for(int i=0; i<n; i++)
    {
        a[i][n+k] = '*';
        k++;
    }
    for(int i=0; i<(2*n)-1; i+=2)
    {
        a[n-1][i] = '*';
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(2*n)-1; j++)
        {
            printf("%c", a[i][j]);
        }printf("\n");
    }
    return 0;
}