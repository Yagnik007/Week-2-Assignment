#include <stdio.h>

int main()
{
    double c;
    printf("Enter the temperature in celsius: ");
    scanf("%lf", &c);
    printf("temperature in fahrenheit is: %lf", 32 + (((double)9/5)*c));
    return 0;
}