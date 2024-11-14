#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }
    
    printf("%d is a %s number.\n", num, (num % 2 == 0) ? "even" : "odd");
    

    return 0;
}