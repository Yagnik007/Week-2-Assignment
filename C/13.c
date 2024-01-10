#include <stdio.h>

int binaryToDecimal(int num) {
    int decimal = 0, base = 1, remainder;
    while (num > 0) {
        remainder = num % 10;
        decimal += remainder * base;
        num /= 10;
        base *= 2;
    }
    return decimal;
}

int main() {
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    printf("Decimal converted: %d\n", binaryToDecimal(binary));

    return 0;
}
