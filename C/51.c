#include <stdio.h>

int main()
{
    int n;
    printf("Enter the year: ");
    scanf("%d", &n);
    if(n%100==0 && n%400==0)
    {
        printf("%d is a leap year.", n);
    }
    else if(n%100==0 && n%400!=0)
    {
        printf("%d is a not leap year.", n);
    }
    else if(n%4==0)
    {
        printf("%d is a leap year.", n);
    }
    else{
        printf("%d is a not leap year.", n);
    }
    return 0;
}