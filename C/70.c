#include <stdio.h>

void decimalToRoman(int num) {
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; num > 0; ++i) {
        while (num >= decimal[i]) {
            printf("%s", roman[i]);
            num -= decimal[i];
        }
    }
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Roman Numeral: ");
    decimalToRoman(num);
    printf("\n");
    return 0;
}