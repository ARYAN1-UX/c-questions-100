#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return -1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    printArray(arr, n);

    printf("Enter the element to search (linear search): ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);
    if (result == -1)
        printf("Element not found (linear search).\n");
    else
        printf("Element found at index %d (linear search).\n", result);

    printf("Enter the element to search (binary search): ");
    scanf("%d", &key);

    // Sort the array for binary search
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");
    printArray(arr, n);

    result = binarySearch(arr, n, key);
    if (result == -1)
        printf("Element not found (binary search).\n");
    else
        printf("Element found at index %d (binary search).\n", result);

    free(arr);
    return 0;
}