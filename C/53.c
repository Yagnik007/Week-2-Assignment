#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a == 0 ? b : a;
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int gcdAnswer;
    for (int i = 1; i < n; i++)
    {
        gcdAnswer = gcd(a[i], gcdAnswer);
        if (gcdAnswer == 1)
        {
            printf("GCD of all the elements of Array is %d ", 1);
            break;
        }
    }
    printf("GCD of all the elements of Array is %d\n", gcdAnswer);

    int lcmAnswer = a[0];
    for (int i = 1; i < n; i++)
    {
        lcmAnswer = (a[i] * lcmAnswer) / gcd(a[i], lcmAnswer);
    }
    printf("LCM of all the elements of Array is %d ", lcmAnswer);

    return 0;
}