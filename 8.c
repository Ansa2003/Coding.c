//Find product of series: 1 2 3 4 5 .... n
#include <stdio.h>

int main() {
    int n, i, product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        product *= i;
    }

    printf("product of the series 1 + 2 + ... + %d = %d\n", n, product);

    return 0;
}

