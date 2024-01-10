#include <stdio.h>

int main()
{
    int num, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    // int x = 0;
    // if(num<0)
    // {
    //     x = 1;
    //     num*=-1;
    // }
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    // if(x) x*=-1; printf("Reversed number: %d\n", reversed);
    else printf("Reversed number: %d\n", reversed);


    return 0;
}