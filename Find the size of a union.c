#include <stdio.h>

union Sample {
    int i;
    float f;
    char str[20];
};

int main() {
    printf("Size of union: %lu bytes\n", sizeof(union Sample));
    return 0;
}