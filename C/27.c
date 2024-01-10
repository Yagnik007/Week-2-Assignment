#include <stdio.h>

int main()
{
    
    int n; 
    printf("Enter the size of the string: ");
    scanf("%d", &n);
    char a[n];
    printf("Enter the string: ");
    scanf("%s", &a);
    
    for(int i=0; i<n/2; i++)
    {
        char t = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = t;
    }

    printf("Reversed string is: ");
    for(int i=0; i<n; i++)
    {
        printf("%c", a[i]);
    } 
    return 0;
}