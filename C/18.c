#include <stdio.h>

int main()
{
    double p,r,t;
    printf("Enter the principal amount: ");
    scanf("%lf", &p);
    printf("Enter the rate of interest: ");
    scanf("%lf", &r);
    printf("Enter the number of years: ");
    scanf("%lf", &t);
    printf("Simple Interest is: %lf", ((p*r*t)/100));
    return 0;
}