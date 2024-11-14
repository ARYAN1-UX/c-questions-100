#include <stdio.h>
#include <string.h>


struct Address {
    char street[100];
    char city[50];
    int pin;
};


struct Student {
    char name[50];
    int rollNo;
    struct Address address;
};

void getStringInput(char *prompt, char *input, int size) {
    printf("%s", prompt);
    fgets(input, size, stdin);
    input[strcspn(input, "\n")] = 0; // Remov
}

void getIntegerInput(char *prompt, int *input) {
    printf("%s", prompt);
    scanf("%d", input);
    getchar();
}

void displayStudentInfo(struct Student student) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll No: %d\n", student.rollNo);
    printf("Address: %s, %s, %d\n", student.address.street, student.address.city, student.address.pin);
}

int main() {
    struct Student student;


    getStringInput("Enter student's name: ", student.name, 50);
    getIntegerInput("Enter roll number: ", &student.rollNo);
    getStringInput("Enter street: ", student.address.street, 100);
    getStringInput("Enter city: ", student.address.city, 50);
    getIntegerInput("Enter pin code: ", &student.address.pin);

    displayStudentInfo(student);

    return 0;
}