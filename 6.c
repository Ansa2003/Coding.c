/*Display all even numbers from 1 to 100 [using loop and if]*/
#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 1 to 100:\n");

    // Loop from 1 to 100
    for (i = 1; i <= 100; i++) {

        if (i % 2 == 0) {
            printf("%d\n", i); // even number give
        }
    }

    return 0;
}