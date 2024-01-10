#include <stdio.h>

int main()
{
    double f;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%lf", &f);
    printf("temperature in celsius is: %lf",  ((double)5/9)*(double)(f-32));
    return 0;
}