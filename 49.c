//input Matrix then find sum

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int i, j, m, n;

    printf("Enter the number of rows and columns respectively of the matrices: \n");
    scanf("%d %d", &m, &n);

    // Input elements of the first matrix
    printf("Enter the elements of the first matrix row by row:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter the elements of the second matrix row by row:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Calculate the sum of the matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display the first matrix
    printf("The first matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Display the second matrix
    printf("The second matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Display the sum matrix
    printf("The sum of the matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}