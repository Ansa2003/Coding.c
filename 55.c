//implement Ackermann function using recursion 

#include <stdio.h>

int A(int m, int n)
{
    if(m == 0) return n + 1;
    if(m > 0 && n == 0) return A(m - 1, 1);
    if(m > 0 && n > 0) return A(m - 1, A(m, n - 1));
    }
    int main() {
    printf("%d\n", A(1, 2)); // call to the function
    return 0;
}