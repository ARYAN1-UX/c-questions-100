#include <stdio.h>

int main() {
    int matrix[2][2];
    int determinant;

    printf("Enter elements of the 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

    printf("Determinant of the matrix is: %d\n", determinant);

    return 0;
}