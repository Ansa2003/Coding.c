//Program in c to check whether a number is even or odd
#include<math.h>
#include<stdio.h>

int main() {
    int num;

    // Prompt user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}