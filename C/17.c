#include <stdio.h>

int main()
{
    double h,b;
    printf("Enter the height: ");
    scanf("%lf", &h);
    printf("Enter the base: ");
    scanf("%lf", &b);
    double ans = (double)0.5*h*b;
    printf("Area of the triangle is: %lf", ans);
}