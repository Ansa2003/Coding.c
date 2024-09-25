//Find sum of series: 1 2 3 4 5 .... n

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of the series 1 + 2 + ... + %d = %d\n", n, sum);

    return 0;
}

