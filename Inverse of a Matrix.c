#include <stdio.h>

int main() {
    int matrix[2][2];
    float determinant;
    float inverse[2][2];

    printf("Enter elements of the 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

    if (determinant == 0) {
        printf("Inverse does not exist as determinant is zero.\n");
        return 1;
    }

    inverse[0][0] = matrix[1][1] / determinant;
    inverse[0][1] = -matrix[0][1] / determinant;
    inverse[1][0] = -matrix[1][0] / determinant;
    inverse[1][1] = matrix[0][0] / determinant;

    printf("Inverse of the matrix is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2f ", inverse[i][j]);
        }
        printf("\n");
    }

    return 0;
}