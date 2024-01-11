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
    int temp = 0;
    for(int i=0; i<n; i++) sum+=a[i][i];
    for(int i=0; i<n; i++)
    {
        temp = 0;
        for(int j=0; j<n; j++)
        {
            temp+=a[i][j];
        }
        if(temp!=sum)
        {
            printf("This is matrix is not a Magic Square");
            return 0;
        }
    }
    for(int i=0; i<n; i++)
    {
        temp = 0;
        for(int j=0; j<n; j++)
        {
            temp+=a[j][i];
        }
        if(temp!=sum)
        {
            printf("This is matrix is not a Magic Square");
            return 0;
        }
    }
    temp = 0;
    for(int i=0; i<n; i++)
    {
        temp+=a[i][n-i-1];
    }
    if(temp!=sum)
    {
        printf("This matrix is not a Magic Square");
        return 0;
    }
    printf("This matrix is a Magic Square");
    return 0;
}