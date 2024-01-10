#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: num1 = %d, num2 = %d\n", a, b);

    a = a + b; 
	b = a - b;
	a = a - b;
	printf("After Swapping: a = %d, b = %d", a, b);

    return 0;
}