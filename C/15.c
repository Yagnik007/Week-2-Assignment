#include <stdio.h>

int main()
{
    double r;
    printf("Enter the radius: ");
    scanf("%lf", &r);
    double ans = ((double)3.14*r*r);
    printf("Area of the circle is %lf", ans);
    return 0;
}