#include <stdio.h>

int main()
{
    int n; 
    printf("Enter the size of the string: ");
    scanf("%d", &n);
    char a[n];
    printf("Enter the string: ");
    scanf("%s", &a);
    int v = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            v++;
        }
    }
    printf("The number of vowels in this string are %d and the number of consonants are %d.", v , n-v);
    return 0;
}