#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int temp[n]; 
    int j = 0;

    for (int i = 0; i < n; i++) {
   
        int found = 0;
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            temp[j++] = arr[i];
        }
    }


    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of elements must be positive.\n");
        return 1;
    }

    int arr[n]; 

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    removeDuplicates(arr, n);

    return 0;
}