//Search for an element in an integer array (linear search)

#include <stdio.h>

int main() {
    int i, n, b, flag = 0;

    printf("Enter the size of the integer array: ");
    scanf("%d", &n);

    int a[n];  

    printf("Enter the elements of the integer array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the value you want to find: ");
    scanf("%d", &b);

    for(i = 0; i < n; i++) {
        if(b == a[i]) {
            printf("Found\n");
            flag = 1;  
            break;     
        }
    }

    if(flag == 0) {
        printf("Not found\n");
    }

    return 0;
}