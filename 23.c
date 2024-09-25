//Read two numbers from keyboard and compare them.
#include <stdio.h>

int main() {
    int num1, num2;

    // Reading two numbers from the keyboard
    printf("Enter the first number: ");
    scanf("%d %d", &num1,&num2);


    // Comparing the numbers
    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    } else {
        printf("%d is equal to %d\n", num1, num2);
    }

    return 0;
}
