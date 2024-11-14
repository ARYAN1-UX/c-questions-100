#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i += 2) {
        sum += i;
    }

    printf("The sum of all odd numbers between 1 and 100 is: %d\n", sum);

    return 0;
}