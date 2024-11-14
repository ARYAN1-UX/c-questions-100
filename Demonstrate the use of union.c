#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    printf("Enter an integer: ");
    scanf("%d", &data.i);
    printf("Integer: %d\n", data.i);

    printf("Enter a float: ");
    scanf("%f", &data.f);
    printf("Float: %.2f\n", data.f);

    printf("Enter a string: ");
    scanf("%s", data.str);
    printf("String: %s\n", data.str);

    return 0;
}