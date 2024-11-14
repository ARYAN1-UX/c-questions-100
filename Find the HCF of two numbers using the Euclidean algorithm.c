#include <stdio.h>
#include <stdlib.h>

int hcf(int a, int b) {
    if (b == 0) return a;
    return hcf(b, a % b);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }

    if (a < 0 || b < 0) {
        fprintf(stderr, "Input numbers should be non-negative\n");
        return EXIT_FAILURE;
    }

    printf("HCF of %d and %d is %d\n", a, b, hcf(a, b));
    return EXIT_SUCCESS;
}