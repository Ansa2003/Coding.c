//display contents of a string in reverse order using pointers
     #include<stdio.h>
      int main() {
    int a[100], n, i;
    int *p;

    printf("Enter the size of the integer array: ");
    scanf("%d", &n);

    printf("Enter the elements of the integer array:\n");

    // Scanning using pointer
    p = &a[0];
    for (i = 0; i < n; i++) {
        scanf("%d", p);
        p++;
    }

    // Printing in reverse order using pointer
    p = &a[n - 1];  // Point to the last element

    printf("\n\nValues of the array in reverse order are:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", *p);  // Print the value at the current pointer location
        p--;  // Move the pointer to the previous element
    }

    return 0;
}