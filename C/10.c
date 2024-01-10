#include <stdio.h>

int main()
{
    int num, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    int x = num;
    while (x != 0) {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
    }

    if(num == reversed) printf("%d is a palindrome number", num);
    else printf("%d is not a palindrome number", num);
    return 0;
}