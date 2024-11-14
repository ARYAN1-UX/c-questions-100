#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
    float marks;
};

void display(const struct Student *s) {
    printf("Student Information:\n");
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("Marks: %.2f\n", s->marks);
}

int main() {
    struct Student s;

    printf("Enter name: ");
    if (fgets(s.name, sizeof(s.name), stdin) == NULL) {
        fprintf(stderr, "Error reading name\n");
        return EXIT_FAILURE;
    }
    s.name[strcspn(s.name, "\n")] = 0; // Remove trailing newline

    printf("Enter age: ");
    if (scanf("%d", &s.age) != 1) {
        fprintf(stderr, "Error reading age\n");
        return EXIT_FAILURE;
    }
    scanf("%*c"); // Consume newline left in input buffer

    printf("Enter marks: ");
    if (scanf("%f", &s.marks) != 1) {
        fprintf(stderr, "Error reading marks\n");
        return EXIT_FAILURE;
    }
    scanf("%*c"); // Consume newline left in input buffer

    display(&s);
    return EXIT_SUCCESS;
}   return EXIT_SUCCESS;
}