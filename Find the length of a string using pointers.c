#include <stdio.h>
#include <string.h>

int stringLength(const char *str) {
    return strlen(str);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Length of string '%s' is %zu\n", str, stringLength(str));

    return 0;
}
    return 0;
}