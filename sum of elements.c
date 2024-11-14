#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n]; 


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }


    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}