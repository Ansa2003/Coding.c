//To find sum of all elements of an integer array

#include <stdio.h>

int main() {
    int a[100];
    int i, n, sum = 0;  

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d integers for the array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];  
    }

    printf("Sum of all elements is %d\n", sum);

    return 0;
}