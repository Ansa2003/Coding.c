/* strrev(): Reverses a string
(note: this is not a standard function 
in the C library.) */

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "phoenix";
    int length = strlen(str);

    // Print original string
    printf("Original string: %s\n", str);

    // Reverse the string in-place
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // Print reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}