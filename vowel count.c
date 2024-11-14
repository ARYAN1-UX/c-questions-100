#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' ||
            ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' ||
            ch == 'U' || ch == 'u') {
            count++;
        }
    }

    printf("Number of vowels in the string: %d\n", count);

    return 0;
}