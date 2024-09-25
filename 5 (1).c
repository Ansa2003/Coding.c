//Display series (using loops): n n-1 n-2 …. 3 2 1

#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sequence: ");

    // Loop from n to 1
    for (int i = n; i >= 1; --i) {
        printf("%d ", i);
    }

    return 0;
}