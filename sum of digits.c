#include <stdio.h>

int main() {
    int number, sum = 0;

 
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        sum += number % 10; 
        number /= 10;       
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}