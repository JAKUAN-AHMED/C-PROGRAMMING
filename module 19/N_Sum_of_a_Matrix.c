#include <stdio.h>

void matrixSum(int R, int C, int A[][C], int B[][C], int result[][C], int row, int col) {
    if (row >= R) {
        // All elements processed, return
        return;
    }

    result[row][col] = A[row][col] + B[row][col]; // Calculate sum

    // Move to the next column
    if (col < C - 1) {
        matrixSum(R, C, A, B, result, row, col + 1);
    }
    // Move to the next row
    else {
        matrixSum(R, C, A, B, result, row + 1, 0);
    }
}

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int A[R][C], B[R][C], result[R][C];

    // Read matrix A
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read matrix B
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Calculate sum
    matrixSum(R, C, A, B, result, 0, 0);

    // Print result
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
