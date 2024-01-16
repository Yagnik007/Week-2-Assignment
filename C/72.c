#include <stdio.h>

int main()
{
    int conversion;
    printf("Enter the conversion you need.\n");
    printf("1: Distance\n");
    printf("2: Weight\n");
    printf("Enter: ");
    scanf("%d", &conversion);
    if (conversion == 1)
    {
        printf("Enter the conversion you need.\n");
        printf("1: km to mile\n");
        printf("2: mile to km\n");
        printf("Enter: ");
        scanf("%d", &conversion);
        printf("Enter value: ");
        double value;
        scanf("%lf", &value);
        conversion == 1 ? printf("%lf km = %lf miles", value, (double)value * (0.62137119)) : printf("%lf miles = %lf km", value, (double)value / (0.62137119));
    }
    else if (conversion == 2)
    {
        printf("Enter the conversion you need.\n");
        printf("1: kg to lbs\n");
        printf("2: lbs to kg\n");
        printf("3: Time\n");
        printf("Enter: ");
        scanf("%d", &conversion);
        printf("Enter value: ");
        double value;
        scanf("%lf", &value);
        conversion == 1 ? printf("%lf kg = %lf lbs", value, (double)value * 2.2) : printf("%lf lbs = %lf kg", value, (double)value / (2.2));
    }
    else
    {
        printf("Enter valid input!");
    }
    return 0;
}