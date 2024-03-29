#include <stdio.h>

int primeNumber(int a)
{
    if (a <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int a; 
    printf("Enter the number: ");
    scanf("%d", &a);
    int x = primeNumber(a);
    if(x)
    {
        printf("%d is a prime number", a);
    }
    else
    {
        printf("%d is not a prime number", a);
    }
    return 0;
}