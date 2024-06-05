#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);


    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    // Allocate memory for the first matrix
    int **m1 = (int**)malloc(r1 * sizeof(int*));
    for(int i = 0; i < r1; i++) {
        m1[i] = (int*)malloc(c1 * sizeof(int));
    }

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            printf("Enter value for m1[%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    // Allocate memory for the second matrix
    int **m2 = (int**)malloc(r2 * sizeof(int*));
    for(int i = 0; i < r2; i++) {
        m2[i] = (int*)malloc(c2 * sizeof(int));
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            printf("Enter value for m2[%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    // Allocate memory for the resultant matrix
    int **res = (int**)malloc(r1 * sizeof(int*));
    for(int i = 0; i < r1; i++) {
        res[i] = (int*)malloc(c2 * sizeof(int));
    }

    // Initialize the result matrix with zeroes
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
        }
    }

    // Multiply matrices
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Print the resultant matrix
    printf("Resultant matrix:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for(int i = 0; i < r1; i++) free(m1[i]);
    free(m1);
    for(int i = 0; i < r2; i++) free(m2[i]);
    free(m2);
    for(int i = 0; i < r1; i++) free(res[i]);
    free(res);

    return 0;
}
