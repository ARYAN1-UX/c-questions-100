#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "Hello, World!\n");
    fclose(file);

    printf("Data written to file.\n");
    return 0;
}