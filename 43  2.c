//strcpy(): Copies one string to another.
#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Hello";
    char copy[50];

    // Copying the string from original to copy
    strcpy(copy, original);

    // Printing the original and copy strings
    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);

    return 0;
}