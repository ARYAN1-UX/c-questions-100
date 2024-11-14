#include <stdio.h>

int main() {
    int number;

    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &number);

   
    printf("Multiplication table for %d:\n", number);
    for (int i = 1; i <= 12; ++i) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}