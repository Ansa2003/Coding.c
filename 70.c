//Write into a text file
#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *fptr;

    // Open a file in write mode ("w"). If the file doesn't exist it will be created
    fptr = fopen("output.txt", "w");

    // Check if the file was successfully opened
    if (fptr == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    // Write data to the file using fprintf()
    fprintf(fptr, "Hello, World!\n");
    fprintf(fptr, "This is a sample text written to the file.\n");

    // Close the file
    fclose(fptr);

    printf("Data written to the file successfully.\n");

    return 0;
}