#include <stdio.h>
#include <string.h>

int main()
{
    char c[100000];
    printf("Enter the string: ");
    scanf("%s", &c);
    printf("The length of the string is: %d", strlen(c));

    return 0;
}