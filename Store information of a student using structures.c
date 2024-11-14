#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0;

    printf("Enter age: ");
    scanf("%d", &s.age);
    getchar(); // Consume newline left in input buffer

    printf("Enter marks: ");
    scanf("%f", &s.marks);
    getchar(); // Consume newline left in input buffer

    printf("Student Information:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}