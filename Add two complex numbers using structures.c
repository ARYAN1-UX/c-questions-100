#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    struct Complex c1, c2, result;

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    result = add(c1, c2);

    printf("Sum: %.2f + %.2fi\n", result.real, result.imag);
    return 0;
}