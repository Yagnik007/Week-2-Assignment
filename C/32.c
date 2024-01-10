#include <stdio.h>
#include <string.h>

int main()
{
    // int n;
    // printf("Enter the size of the string: ");
    // scanf("%d", &n);
    char c[1000];
    printf("Enter the string: ");
    gets(c);
    int cnt = 0;
    for(int i=0; i<strlen(c); i++)
    {
        if(c[i] == ' ') cnt++;
    }
    printf("Words in the sentence are: %d", cnt+1);
    return 0;
}