#include <stdio.h>

int main() {
    int var;
    int *ptr;

    printf("Enter an integer: ");
    scanf("%d", &var);

    ptr = &var;

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}