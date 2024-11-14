#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }

        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}