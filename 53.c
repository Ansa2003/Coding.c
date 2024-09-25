//program in c to search for an element in integer array using function

#include<stdio.h>
#include<math.h>

int search(int a[], int n, int x);  

int main()
{
    int a[50], n, x, d, i;
    printf("enter the size of the integer array: ");
    scanf("%d", &n);

    printf("enter the elements of the integer array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter the number you want to search: ");
    scanf("%d", &x);

    d = search(a, n, x);  // function call
    if(d == -1)
        printf("not found\n");
    else
        printf("found at location %d\n", d);  
}

int search(int a[], int n, int x)  
{
    for(int i = 0; i < n; i++)  // 
    {
        if(x == a[i])
            return i;  // I if found
    }
    return -1;  // not found
}