#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Appending some text...\n");
    fclose(file);

    printf("Data appended to file.\n");
    return 0;
}