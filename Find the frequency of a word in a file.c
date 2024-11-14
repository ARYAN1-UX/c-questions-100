#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORD_LENGTH 50
#define FILE_NAME "example.txt"

int main() {
    FILE *file;
    char word[MAX_WORD_LENGTH];
    char temp[MAX_WORD_LENGTH];
    int count = 0;

    printf("Enter the word to search: ");
    if (scanf("%49s", word) != 1) {
        printf("Error reading input.\n");
        return 1;
    }

    file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("Error opening file '%s'.\n", FILE_NAME);
        return 1;
    }

    while (fscanf(file, "%49s", temp) == 1) {
        if (strcasecmp(temp, word) == 0) {
            count++;
        }
    }

    fclose(file);
    printf("Frequency of the word '%s' is: %d\n", word, count);
    return 0;
}