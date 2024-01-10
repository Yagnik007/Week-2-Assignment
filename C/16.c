#include <stdio.h>

int main()
{
    double l,b;
    printf("Enter the length: ");
    scanf("%lf", &l);
    printf("Enter the breadth: ");
    scanf("%lf", &b);
    double ans = l*b;
    printf("Area of the rectangle is: %lf", ans);
}