//Input an integer array from the user and display the same.

#include <stdio.h>

int main() {
    int arr[5];  // Declare an integer array of size 5
    int i;  // Declare a loop variable

    // Input elements from the user
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);  // Read integers from the user and store them in the array
    }

    // Display the elements of the array
    printf("The array you entered is:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);  // Print each element of the array
    }

    return 0;
}