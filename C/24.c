
#include <math.h>
#include <stdio.h>

int gcd(int a, int b)
{

    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}
