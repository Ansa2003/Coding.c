// Write a program in C to swap two integers using functions (call by ref)

#include <stdio.h>

void swap(int*, int*);

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);

    printf("Values before swapping are %d and %d\n", x, y);

    swap(&x, &y);

    printf("Values after swapping are %d and %d\n", x, y);

    return 0;
}

void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}