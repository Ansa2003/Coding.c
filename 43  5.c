//strcmp(): Compares two strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "happy";
    char str2[] = "sad";

    int result = strcmp(str1, str2);

    if (result < 0) {
        printf("'%s' is less than '%s'\n", str1, str2);
    } else if (result == 0) {
        printf("'%s' is equal to '%s'\n", str1, str2);
    } else {
        printf("'%s' is greater than '%s'\n", str1, str2);
    }

    return 0;
}
