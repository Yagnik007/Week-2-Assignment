#include <stdio.h>

int main()
{
    int n; 
    printf("Enter the size of the first string: ");
    scanf("%d", &n);
    char a[n];
    printf("Enter the first string: ");
    scanf("%s", &a);
    int m; 
    printf("Enter the size of the second string: ");
    scanf("%d", &m);
    char b[m];
    printf("Enter the second string: ");
    scanf("%s", &b);
    char c[n+m];
    for(int i=0; i<n; i++)
    {
        c[i] = a[i];
    }
    for(int i=0; i<m; i++)
    {
        c[i+n] = b[i];
    }
    printf("The concatenated strings are: %s", c);
    return 0;
}