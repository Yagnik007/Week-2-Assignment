#include <stdio.h>
void printPascal(int n)
{
    for (int l = 1; l <= n; l++)
    {
        for (int s = 1; s <= n - l; s++)
            printf(" ");

        int c = 1;
        for (int i = 1; i <= l; i++)
        {
            printf("%4d", c);
            c = c * (l - i) / i;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the height of the Pascal's Triangle: ");
    scanf("%d", &n);
    printPascal(n);
    return 0;
}
