#include <stdio.h>

int main() {
    int num1, num2, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    while (num2 != 0) {
        gcd = num2;
        num2 = num1 % num2;
        num1 = gcd;
    }

    printf("The GCD is: %d\n", gcd);

    return 0;
}