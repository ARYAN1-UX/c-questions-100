#include <stdio.h>

void decimalToHexadecimal(int num) {
    if (num >= 16) {
        decimalToHexadecimal(num / 16);
    }
    int rem = num % 16;
    if (rem < 10) {
        printf("%d", rem);
    } else {
        printf("%c", rem - 10 + 'A');
    }
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Hexadecimal equivalent: ");
    decimalToHexadecimal(num);
    printf("\n");

    return 0;
}