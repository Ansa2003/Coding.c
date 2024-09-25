//input Matrix then find transpose

#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10], i, j, m, n;

    printf("Enter the number of rows and columns respectively of the matrix: \n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix row by row:\n");

    // Input matrix 
    for (i = 0; i < m; i++) { // m rows
        for (j = 0; j < n; j++) { // n columns
            scanf("%d", &a[i][j]);
        }
    }

    // original matrix
    printf("The entered matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n"); 
    }

    // Compute transpose of matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            transpose[i][j] = a[j][i];
        }
    }

    // Display the transpose matrix
    printf("The transpose of the matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}