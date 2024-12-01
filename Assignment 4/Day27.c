//Assignment 4 Q26

#include <stdio.h>

void transposeMatrix(int *matrix, int *transposed, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(transposed + j * rows + i) = *(matrix + i * cols + j);
        }
    }
}

void printMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], transposed[cols][rows];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    printMatrix((int *)matrix, rows, cols);

    transposeMatrix((int *)matrix, (int *)transposed, rows, cols);

    printf("Transposed Matrix:\n");
    printMatrix((int *)transposed, cols, rows);

    return 0;
}
