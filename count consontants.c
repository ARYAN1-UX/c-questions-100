#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000]; 
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 
        
        if ((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            count++;
        }
    }

    printf("Number of consonants in the string: %d\n", count);

    return 0;
}