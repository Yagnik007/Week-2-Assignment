#include <stdio.h>
#include <string.h>

int value(char c)
{
    switch (c) {
        case 'I':
            return 1;

         case 'V':
            return 5;

         case 'X':
            return 10;

         case 'L':
            return 50;

         case 'C':
            return 100;

         case 'D':
            return 500;

         case 'M':
            return 1000;

        default:
            return 0;
    }
}

int romanToInt(char s[], int n)
{
    int res = value(s[n-1]);
    for (int i = 0; i < n - 1; i++)
    {
        if (value(s[i]) < value(s[i + 1]))
            res -= value(s[i]);
        else
            res += value(s[i]);
    }
    return res;
}

int main()
{
    printf("Enter the input string: ");
    char s[100];
    scanf("%s", &s);
    int n = strlen(s);
    printf("The integet of the roman number is %d", romanToInt(s,n));
    return 0;
}