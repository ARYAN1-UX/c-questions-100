#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *target;
    char ch;

    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1.txt.\n");
        return 1;
    }

    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error opening file2.txt.\n");
        fclose(file1);
        return 1;
    }

    target = fopen("merged.txt", "w");
    if (target == NULL) {
        printf("Error opening merged.txt.\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, target);
    }
    rewind(file1); // Reset file pointer to the beginning of file1
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, target);
    }

    fclose(file1);
    fclose(file2);
    fclose(target);
    printf("Files merged successfully.\n");
    return 0;
}