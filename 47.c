//input a matrix (2d array)from the user and display it

#include <stdio.h>

int main() {
    int a[10][10], i, j, m, n;

    printf("Enter the number of rows and columns respectively of the matrix: \n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix row by row:\n");


    for (i = 0; i < m; i++) { // m rows
        for (j = 0; j < n; j++) { // n columns
            scanf("%d", &a[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n"); // Move to the next row after printing all columns
    }

    return 0;
}