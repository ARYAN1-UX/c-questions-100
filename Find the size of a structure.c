#include<stdio.h>

struct Sample {
    int i;
    float f;
    char str[20];
};

int main() {
    printf("Size of structure: %lu bytes\n", sizeof(struct Sample));
    return 0;
}