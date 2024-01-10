#include <stdio.h>

int main()
{
    printf("Enter the first number: ");
    double a;
    scanf("%lf", &a);
    printf("Enter the second number: ");
    double b;
    scanf("%lf", &b);
    printf("Enter the operator: ");
    char c;
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", a, b, a + b);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf", a, b, a - b);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf", a, b, a * b);
        break;

    case '/':
        printf("%.1lf / %.1lf = %.1lf", a, b, a / b);
        break;

    default:
        printf("Error! operator is not correct");
    }
    return 0;
}